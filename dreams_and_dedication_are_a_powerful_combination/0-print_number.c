#include "my_functions.h"

void print_number(int n)
{
  int count,i,temp,j,x; /* Declares integer variables  */
  temp=0; /* Stores previous result */
  i=n;
  
  for (count=0;i!=0;count++) /* Finds the number of  digits */
    i=i/10;

  if (n<0)    /* If number is negative, character '-' is printed before number */
    print_char('-');

  do{   /* Makes loop work for 0 */
    i=n;
    x=count;

    for(;x>1;x--){  /* Starts from beginning */
      i=i/10;
    }
    j=i-(temp*10);  /* Subtracts previous value */
    temp=i;        /* Saves previous value */

    if (j<0){  /* If number is negative, makes number positive */
      j=j*(-1);
    }
    print_char(j+48); /* Add +48 from ascii values */
    count--;
  }
  
  while(count>0);
}
