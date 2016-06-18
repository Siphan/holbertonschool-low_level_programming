/*
 * This program prints a cross on the standard output.
 * It is compiled and linked via a unique Makefile.
 * It takes the size of the cross as a command-line argument.
 * If the size is odd, the center of the cross is an uppercase X.
 */
#include <unistd.h>

int print_char(char);

int main(void)
{
  int n = 0;

  if(n == 0) {
    return;
  }

  else if(n == 1) {
    print_char('X');
    print_char('\n');
  }

  else {
    print_char('\\');
    print_char('\n');
    print_char('/');
    print_char('\n');
    print_char('/');
    print_char('\n');
    print_char('\\');
    print_char('\n');
  }

  return (0);
}
