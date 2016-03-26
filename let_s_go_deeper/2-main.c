#include <stdio.h>
int square_root(int n);

int main(void)
{
  int r;

  r = square\_root(1);
  printf("%d\n", r);
  r = square\_root(1024);
  printf("%d\n", r);
  r = square\_root(16);
  printf("%d\n", r);
  r = square\_root(17);
  printf("%d\n", r);
  r = square\_root(25);
  printf("%d\n", r);
  r = square\_root(-1);
  printf("%d\n", r);
  return (0);
}
