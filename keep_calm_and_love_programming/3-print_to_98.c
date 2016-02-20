#include <stdio.h>

void print_to_98(int n)
{
  /* If int is equal to 98, prints 98 
  */
  if (n == 98)
    {
      printf("%d\n", n);
    }
  /* If int is lower than  98, 
  prints ascending values from int value to 98 
  */
  else if (n < 98)
    {
      for (; n <=98; n++)
	{
	  if (n == 98)
	    {
	      printf("%d\n", n);
	    }

	  else
	    {
	      printf("%d", n);
	      printf(", ");
	    }
	}
    }
  /* If int is higher than 98, 
  prints descending values from int value to 98 
  */
  else
    {
      for (; n >= 98; n--)
	{
	  if (n == 98)
	    {
	      printf("%d\n", n);
	    }

	  else
	    {
	      printf("%d", n);
	      printf(", ");
	    }
	}
    }
}
