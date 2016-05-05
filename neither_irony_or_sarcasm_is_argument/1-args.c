/* This program prints all arguments it receives */
#include <stdio.h>

int main(int ac, char **av) { /* ac is the argument counter, av a two dimensional array */

  int i; /* Declaring index */

  for(i = 0; i < ac; i++) { /* Loop to print all arguments passed to the program */
    printf("%s\n", av[i]); /* Prints every argument (in this case, string) passed, followed by a new line, using array av */
    }

    return (0);
}

