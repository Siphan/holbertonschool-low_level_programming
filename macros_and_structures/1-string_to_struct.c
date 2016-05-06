/*
  Function that stores a string and its length in a newly allocated structure,
  and return the address of this structure
*/

#include "str_struct.h" /* Contains the definition of the struct String */
#include <stdlib.h> /* Function malloc used */

int strn_len(char *str);
void print_string_struct(struct String *str);
struct String *string_to_struct(char *str)
{
  struct String *ptr_to_struct; /* Declaring pointer to structure called String */
  int i;
  int len;
  char *str2;

ptr_to_struct = malloc(sizeof(struct String)); /* Allocating memory space to struct String */
/*
The function string_to_struct returns a pointer to the struct String
and takes a pointer to a char as a paramater
*/
if(ptr_to_struct == NULL)
{
  return NULL;
}
len = strn_len(str);
str2 = malloc(sizeof(char) * len); /* Allocating memory space to the copied string */

for (i = 0; str[i] != '\0'; i++)
  {
    str2[i] = str[i]; /* Copying the string */
  }

ptr_to_struct->str = str2; /* The str element of the structure holds a copy of the string passed in parameter */
ptr_to_struct->length = len;

  return ptr_to_struct;
}

int strn_len(char *str)
{
  int i;
  for(i = 0; str[i] != '\0'; i++);
  return i;
}
