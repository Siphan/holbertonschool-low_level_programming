#include <stdio.h>
void triangles_in_the_term(int h, int n) 
{
  int row, space, star; /* Declaring variable for the number of rows, spaces, and stars */
  int height = h; /* Makes a copy of h because we're using 2 loops with h */
/* Int n equals the number of triangles */
  
  while (n > 0) /* Loop to print number of triangles */
    {

      for(row = 1; row <= h ; row++) /* Loop to print number of rows */
	{
	  for(space = 0; space < (height - 1); space++) /* Number of spaces to be printed before and after the stars */
	{
	  printf(" ");
	}
      height--; 
      star = 0; /* Initialize star variable before using it */
      
      while(star != (2 * row) -1) /* Number of stars to be printed is equal to (rows * 2) - 1 */
	{
	  printf("*");
	  star++;
	}
      printf("\n");
    }
      height = h; /* Need to reset the height to h or the spaces will be printed after the stars  */
      
  n--; /* End of while loop that defines number of triangles to be printed */
    }
  return; /* Should be outside of the first while loop to print more than one triangle */
}

  
