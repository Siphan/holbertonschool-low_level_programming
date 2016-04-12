#include <stdio.h>
#include <stdlib.h>

char *string_dup(char *str)
{
  while (1)
    {
      str = malloc(sizeof(char) * 9);
      if (str == NULL)
        {
          fprintf(stderr, "Not enough memory left!\n");
	  /*          return (1); */
        }
      free(str);
    }
  return (0);
}
