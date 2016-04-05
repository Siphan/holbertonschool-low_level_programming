/* This function prints the number of arguments you pass to it */
#include <stdio.h>

int main(int ac, char **av) { /* ac is the argument counter, av a two dimensional array */
  printf("%d\n", ac - 1); /* Prints the number of arguments passed after executing a.out */
  if (av[0] == 0) { /* av[0] is the name of the program, or an empty string if the name is not available  */
    printf("Error... I think\n");
    }
  return (0);
}
