/* Using bit operators, this function returns 'O' if a number is odd and 'E' if number is even */
int print_char(char c);

char odd(int n)
{
  int i;
  i = 1;
  if (n & i) /* Bit operator to comnpary if n & i agree. If they do, number is odd */
    {
      return ('O'); 
    }
  else
    {
      return ('E');
    }
}
