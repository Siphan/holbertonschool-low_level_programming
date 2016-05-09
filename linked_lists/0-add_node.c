/* Program that allocates a new node and links it to a list */

#include <stdlib.h> /* Uses malloc function */
#include "list.h"

/* The function str_len takes a string
   and returns the length of string
   It takes a argument (char *) and
   returns an argument (int)
*/

int str_len(char *str)
{
  int i;
  for(i = 0; str[i] != '\0'; i++);
  return i;
}

/* Function that returns a pointer to a newly allocated
   space in memory, which contains a copy of the
   string given as a parameter.
*/

char *string_dup(char *str)
{

  int i;
  int len;
  char *str2;

  i = 0;
  len = str_len(str);
  str2 = malloc(sizeof(char) * len); /* Allocating memory space to the copied string */

  if (str2 == NULL)
    {
      return (NULL);
    }
  else
    {
      while(i<len)
	{
	  str2[i] = str[i]; /* Copying the string str in a new string str2 */
	  i++;
	}
      str2[i] = '\0';
    }
  return str2;
}


/* Function that allocates a new node and links it to a list */
int add_node(List **list, char *content)
{
  List *head;
  List *node;

  head = *list;
    if(head  == NULL)
    {
      head = malloc(sizeof(List));
      if(head == NULL)
	return (1);
      else
	{
	  head->str = string_dup(content);
	  head->next = NULL;
	  *list = head;
	  return (0);
	}
    }
    else
    {
      node = malloc(sizeof(List));
	if(node == NULL)
	  return (1);
	else
	{
	  node->str = string_dup(content);
	  node->next = *list;
	  *list = node;
	  return (0);
	}
    }
  return 1;
}
