#include <stdlib.h>
#include "prototypes.h"

void print_longnumber(unsigned long int num, int *count)
{
  char *ptr;
  ptr = decimal_to_hex(num, 10, 1);
  *count += print_string(ptr);
  free(ptr);
}
