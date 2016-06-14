#include "prototypes.h"

/* Function that prints a string */
void print_string(char *str)
{
  int c;
  for(c = 0; *(str + c); c++){
    print_char( *(str + c));
  }
}
