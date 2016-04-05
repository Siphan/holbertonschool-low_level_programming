/* This function prints the number of arguments you pass to it */
#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("%d\n", argc - 1);
  if (argv[0] == 0) {
    printf("Error... I think");
    }
  return (0);
}
