#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, j;
	hash_node_t *temp;

  j = 0;
	if (ht == NULL)
	{
		return;
		printf("{}\n");
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		for (temp = ht->array[i]; temp; temp = temp->next)
		{
			if (j == 0)
      {
        printf("'%s': '%s'", temp->key, temp->value);
      }
      else
      {
        printf(", '%s': '%s'", temp->key, temp->value);
      }
      j++;
		}
	}
	printf("}\n");
}
