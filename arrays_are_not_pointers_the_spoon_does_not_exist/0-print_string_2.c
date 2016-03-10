int print_char(char c);
void print_string_2(char *str) /* Function to print every other character in s tring */
{
while(*str!='\0') 
 {
   print_char(*str); /* Starts with printing the first character */
   str = (str+2); /* Will print every other character after the first char */
  }
}
