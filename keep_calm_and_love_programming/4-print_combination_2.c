#include <stdio.h>

void print_combination_2(void)
{
  for (int i = 0; i < 10; i++) { /* Loop to print first digit */
    for (int j = 0; j < 10; j++) { /* Loop to print second digit */
      if (j >= i ) {
	if (j != i) {
	  printf("%d",i);
	  printf("%d",j);

	  if ((i == 8) && (j == 9)) {
	  } else {
	    printf(","); /* Prints comma and space after each number except 89 */
	    printf(" ");
	  }

	}
      }
    }
  }

}
