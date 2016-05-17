#include "my_functions.h"
void print_string(char *str){ /* Print a string */
  print_char(str[0]);
  while (*str != '\0'){
    str++;
    print_char(*str);
  }
}
