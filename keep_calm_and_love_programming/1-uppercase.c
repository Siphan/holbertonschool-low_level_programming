/* Includes standard input output header */
#include <stdio.h>

char uppercase(char c)
{
  if ((c > 96) && (c < 123))
    {
      c = c -32;
      return c;
    }
  else
    {
      return c;
    }
}

