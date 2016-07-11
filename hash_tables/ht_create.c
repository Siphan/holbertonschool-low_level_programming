/* Function that create a new HashTable */
#include<stdlib.h>
#include"hashtable.h"
int print_char(char);

HashTable *ht_create(unsigned int size);

int main()
{
  unsigned int size;
  size = 0;

  ht_create(size);

  return (0);
}

HashTable *ht_create(unsigned int size)
{
  HashTable *new_table;
  unsigned int i;

  /* Invalid size for table */
  if(size < 1){
    return NULL;
  }

  /* Attempt to allocate memory for the table structure */
  if((new_table = malloc(sizeof(HashTable))) == NULL){
    return NULL;
  }

  /* Attempt to allocate memory for the table itself */
  if((new_table->array = malloc(sizeof(List) * size)) == NULL) {
    return NULL;
  }

  /* Initialize the elements of the table */
  for(i=0; i<size; i++){
    new_table->array[i] = NULL;
  }

  /* Set the table's size */
  new_table->size = size;

  return new_table;
  }
