/* Function that prints the alphabet in lower case and in reverse order */
int print_char(char c); /* Prototype */

void print_tebahpla(void)
{
  int c;
  for (c='z'; c>='a'; c--)
    {
      print_char(c);
    }
}
