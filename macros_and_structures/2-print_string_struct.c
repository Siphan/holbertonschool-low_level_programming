/* 
  Function that prints the content of a struct called String 
  and the length of the string
*/
#include "str_struct.h"

/* Prototypes */
int print_char(char c);
void print_number(int n);
struct String *string_to_struct(char *str);

void print_string_struct(struct String *str)
{
/* Using a pointer to access the string element of our data structure */
int i; /* Counter to loop through the string we want to print */

for(i = 0; str->str[i] != '\0'; i++)
{
  print_char(str->str[i]); /* Using a pointer to access the string element of our data structure */
}
  print_char(','); /* Prints a comma after the string, followed by a space */
  print_char(' '); 
  print_number(str->length); /* Using a pointer to access the length element of our data structure. Prints the length of the string */
  print_char('\n'); /* Prints a new line */
}
