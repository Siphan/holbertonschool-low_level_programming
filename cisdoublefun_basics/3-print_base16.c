/* Function that prints all the numbers of base 16, from 0 to F */
int print_char(char c);

void print_base16(void)
{
  int c;
  for (c = 0; c <=70; c++) /* Loop to iterate through each character of ascii table */
    {
      if (c >= 48 && c <= 57) /* Prints every character from 0 to 9 */
	{
	  print_char(c);
	}
      else if (c >= 65 && c <= 71) /* Prints every character from A to F */
	{
	  print_char(c);
	}
      else {}
    }
}
