#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  char *str;

  str = malloc(sizeof(*str) * 3);
  str[0] = 'O';
  str[1] = 'k';
  str[2] = 0;
  printf("%s\n", str);
  return (0);
}
