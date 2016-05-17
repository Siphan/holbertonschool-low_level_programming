#include "my_functions.h"
void exit_shell(char **command) {
  int value;
  write(2, "Exiting C-shell\n", 23); /* exiting */
  if (len_command(command) <= 1) {/* If there is no value return 0; */
    exit(0);
  }
  value = string_to_integer(command[1]);
  exit(value); /* exit with value */
}
