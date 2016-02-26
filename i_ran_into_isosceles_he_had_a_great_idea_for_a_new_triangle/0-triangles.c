#include <stdio.h>
void triangles_in_the_term(int h, int n) 
{
  int i,space,k = 0; /* Declaring i which is the number of rows*/
  int height = h; /* Makes a copy of h because we're using 2 loops with h */

  while (n > 0) /* Loop to print one triangle */
    {
  for(i=1; i<=h ; i++)
    {
      for(space=0; space< (height-1); space++) /* Number of spaces to be printed before and after the stars */
	{
	  printf(" ");
	}
      height--;
      while(k != 2*i -1) /* Number of stars to be printed is equal to rows * 2 - 1 */
	{
	  printf("*");
	  k++;
	}
      k=0;
      printf("\n");
    }
  n--;
  return;
    }
}

  
