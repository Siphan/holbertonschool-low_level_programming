#include "my_functions.h"

void print_last_digit(int n)
{
  char c;

  /* If integer is positive,                                                                 
     get remainder (last digit) 
  */
  if (n > 0)
    {
      n=n%10;
      c=n+'0';
      print_char(c);

    /* Converts negative integers to positive integers
       and prints last digit
    */
    } else if (n < 0){
    n=n*-1%10;
    c=n+'0';
    print_char(c);

    } else {
    c=n+'0';
    print_char(c);
    }

}
