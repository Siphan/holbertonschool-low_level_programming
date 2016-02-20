#include "my_functions.h"

int absolute(int n)
{
  int x; /* Declares a new integer variable */
  
  if (n < 0)
    {
      x = n * -1; /* Makes negative number positive */
      return x; /* Prints absolute value of negative numbers */
    }
  else
    {
      return n; /* Prints absolute value of positive numbers */
    }
}

 


