#include "my_functions.h"
int len_command(char **command) {
  int length = 0;
  while (*command != 0) {
    length++;
    command++;
  }
  return length; /* length of command */
}
