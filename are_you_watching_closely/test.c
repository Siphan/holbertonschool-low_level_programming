/* The code in this file stems from The New Boston tutorial */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  char food[] = "tuna"; /* Array of char ie string */
  printf("The best food is %s \n.", food);

  strcpy(food, "bacon"); /* Func to set aside mem for (new) str and repl orig str */
  printf("The best food is %s \n.", food);

  return (0);
}
