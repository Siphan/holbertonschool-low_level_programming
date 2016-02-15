#include "my_functions.h" /* Contains prototypes */

void print_combination_2(void)
{
  int i,j; /* To be used in for loops */
  for ( i = 0; i < 9; i++ )
    {
      for ( j = i + 1; j < 10; j++ ) /* Notes i+1 */
	{
	  print_number(i);
	  print_number(j);
	  if (!(i==8 && j==9)) /* Prints commas and spaces  */
	    {
	      print_char(',');
	      print_char(' ');
	    }
	}
    }
}
