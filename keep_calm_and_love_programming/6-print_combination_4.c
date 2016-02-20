#include "my_functions.h"

void print_combination_4(void)
{
  /* Declares integers
  */
  int a;
  int b;
  int c;
  int d;

  int x;
  int z;

  /* Use four loops to print each of the four digits before a comma
  */ 
  for(a=0; a<=9; a++)
    {
      for(b=0; b<=9; b++)
	{
	  for(c=0; c<=9; c++)
	    {
	      for(d=0; d<=9; d++)
		{
		  x=a*10;
		  x=x+b;

		  z=c*10;
		  z=z+d;

		  if(x != z)
		    {
		      if(z > x)
			{
			  print_number(a);
			  print_number(b);
			  print_char(' ');
			  print_number(c);
			  print_number(d);

			  /* Prints comma after each two pairs of digits except for the last two pairs
			   */
			  if (z == 99 && x == 98)
			    {} else {
			    print_char(',');
			    print_char(' ');
			  }
			}
		    }
		}
	    }
	}
    }
}
