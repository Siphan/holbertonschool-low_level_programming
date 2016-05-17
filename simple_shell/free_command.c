#include "my_functions.h"
void free_command(char **command) { /* free */
  int i = 0;
  while (command[i] != 0) {
    free(command[i]); /* free */
    i++;
  }
  free(command);
}
