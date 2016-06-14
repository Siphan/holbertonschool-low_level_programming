/*
 * Exercise from slide 18
 * https://docs.google.com/presentation/d/1GWCom9UEB72h0pvOIw8ur77WjwE2BQqzhTDn9b17hwY/edit#slide=id.g144e76496c_1_64
 */

#include <stdio.h>
#include <stdarg.h>

void foo(char *fmt, ...)
{
  va_list ap;
  int d;
  int i;
  char c, *s;

  va_start(ap, fmt);
  i = 0;
  while (fmt[i] != '\0')
  {
    switch (fmt[i]) {
    case 's': /* Case where passed parameter is a string */
      s = va_arg(ap, char *);
      printf("string %s\n", s);
      break;
    case 'd': /* Case where passed parameter is an int */
      d = va_arg(ap, int);
      printf("int %d\n", d);
      break;
    case 'c': /* Case where passed parameter is a char */
      c = (char) va_arg(ap, int);
      printf("char %c\n", c);
      break;
    }
    ++i;
  }
  va_end(ap);
}

int main(void)
{
  foo("csddcs", 65, "Holberton", 98, 402, 'a', "SF"); /* First parameter specifies the cases we'll need to print */
  return (0);
}

/*
 * Terminal Output:
 * char A
 * string Holberton
 * int 98
 * int 402
 * char a
 * string SF
 */
