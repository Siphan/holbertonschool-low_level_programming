#include "hash_tables.h"
/**
 * key_index - Return the index of a key in a hash table.
 * @key: key to look for
 * @size: size of the hash table
 *
 * Return: index of key in hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
