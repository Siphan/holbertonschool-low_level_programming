# Hash Tables Project

* Data structures for this project:

```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;

/**
 * struct shash_node_s - Node of a sorted hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 * @sprev: A pointer to the previous element of the sorted linked list
 * @snext: A pointer to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
     char *key;
     char *value;
     struct shash_node_s *next;
     struct shash_node_s *sprev;
     struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
     unsigned long int size;
     shash_node_t **array;
     shash_node_t *shead;
     shash_node_t *stail;
} shash_table_t;
```


## Functions

```c
/* hash_table_create - Create a hash table */
hash_table_t *hash_table_create(unsigned long int size);

/* hash_dbj2 - Hash function implementing the djb2 algorithm */
unsigned long int hash_djb2(const unsigned char *str);

/* key_index - Return the index of a key */
unsigned long int key_index(const unsigned char *key, unsigned long int size);

/* hash_table_set - Add an element to the hash table */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);

/* hash_table_get - Retrieve a value associated with a key */
char *hash_table_get(const hash_table_t *ht, const char *key);

/* hash_table_print - Print a hash table. */
void hash_table_print(const hash_table_t *ht);

/* hash_table_delete - Delete a hash table.*/
void hash_table_delete(hash_table_t *ht);

/* hash_table_create - Create a hash table. */
shash_table_t *shash_table_create(unsigned long int size);

/* hash_table_set - Add an element to a hash table. */
int shash_table_set(shash_table_t *ht, const char *key, const char *value);

/* hash_table_get - Retrieve a value associated with a key. */
char *shash_table_get(const shash_table_t *ht, const char *key);

/* hash_table_print - Print a sorted linked list. */
void shash_table_print(const shash_table_t *ht);

/* hash_table_print_rev - Print a sorted linked list in reverse order. */
void shash_table_print_rev(const shash_table_t *ht);

/* hash_table_delete - Delete a  hash table. */
void shash_table_delete(shash_table_t *ht);

/* shash_table_sort - Sort a linked list in alphabetical order. */
void shash_table_sort(shash_table_t *ht, shash_node_t *new, shash_node_t *tmp);
```
