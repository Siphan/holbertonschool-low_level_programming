/*
 * Testing varags functions
 * Tutorial https://www.youtube.com/watch?v=-dZpDPFp6YU 
 */

#include <stdio.h>
#include <stdarg.h>

/* Function calculating the sum of integers */
int sumnum(int num, ...) /* The first parameter is the number of int */
{
  int sum = 0;

  va_list argptr;
  int count = 0;

  va_start(argptr, num);

  while(count < num)
  {
    sum += va_arg(argptr, int);

    count++;
  }

  va_end(argptr);

  return sum;
}

/* Function that prints strings */
void printstr(int num, ...) /* The first parameter is the number of strings */
{
  int count = 0;
  char *ptr;
  va_list argptr;

  va_start(argptr, num);

  while (count < num)
  {
    ptr = va_arg(argptr, char *);
    printf("ptr = %s\n", ptr);

    count++;
  }

  va_end(argptr);
}

int main(int argc, char *argv[])
{
  int total;

  total = sumnum(5, 3, 5, 7, 6, 4); /* The first parameter is the number of int */

  printf("total = %d\n", total);

  printstr(3, "one", "two", "three"); /* The first parameter is the number of strings */

  return 0;
}
