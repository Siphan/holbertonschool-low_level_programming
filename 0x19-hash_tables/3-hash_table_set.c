#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table
 * @ht: the hash table to be updated
 * @key: key to add
 * @value: value to add
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp;
	unsigned long int index;

	if ((ht == NULL) || (key == NULL) || (value == NULL))
		return (0);

	/* Find the index */
	index = key_index((const unsigned char *)key, ht->size);

	/* Add the key/value pair at the index */
	if (ht->array[index] != NULL)
	{
		temp = ht->array[index];
		while ((temp != NULL) && (strcmp(temp->key, key) != 0))
		{
			temp = temp->next;
		}
		if ((temp != NULL) && (strcmp(temp->key, key) == 0))
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
