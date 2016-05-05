/* This function prints the number of arguments you pass to it */
#include <stdio.h>
/* Function counts command line arguments after ./a.out */
int main(int ac, char **av) {
  if (av[0] != '\0') {
    printf("%d\n", ac - 1);
  }
  return 0;
}
