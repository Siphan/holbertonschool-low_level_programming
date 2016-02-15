#include "my_functions.h"

void print_combination_1(void)
{
  int i;
  print_number(0); /* No comma is printed before '0' */
  for ( i = 1; i < 10; i++ ) /* Loop to print number from 1 to 9 */
    {
      print_char(','); /* Prints comma after each number */
      print_char(' '); /* Prints space after each number */
      print_number(i);
    }
}
