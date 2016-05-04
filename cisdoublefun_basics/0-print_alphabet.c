/* Function that prints the alphabet in lowercase */
int print_char(char c); /* Prototype */

void print_alphabet(void)
{
  int c;
  for (c='a'; c<='z'; c++)
    {
      print_char(c);
    }
}
