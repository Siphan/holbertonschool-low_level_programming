/* include header containing prototypes
 */
#include "my_functions.h"
#include <stdio.h>

void print_number(int n) 
{
  int nu = n;
  int length;
  int power = 1;
  if(nu < 0) {
    nu = nu * (-1), print_char('-');
      }
  for ( length = 0; nu>0; length++ ) {
    nu = nu/10;
  }
    printf("%d\n", length);

while(length > 1) {
  power = power * 10;
  length = length - 1;
 }

printf("power %d\n", power);
}




