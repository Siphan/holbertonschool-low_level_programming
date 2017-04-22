#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_get - Retrieve a value associated with a key in hash table
 * @ht: Hash table
 * @key: Key to look up
 *
 * Return: Value associated with key, NULL if key does not exist
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
  unsigned long int index;
  hash_node_t *temp_node;

  temp_node = NULL;
  index = 0;

  /* Retrieve index */
  index = key_index((const unsigned char *) key, ht->size);
  /* Retrieve node at index */
  temp_node = ht->array[index];

  while (temp_node != NULL)
  {
    /* If key not found */
    if (temp_node->key == NULL)
    {
      break;
    }

    /* If key found, retrieve value */
    else if (strcmp(key, temp_node->key) == 0)
    {
      return (temp_node->value);
    }
  }

  /* If key not found */
  return (NULL);
}
