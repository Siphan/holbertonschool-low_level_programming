/* Function that takes an integer as argument and 
prints P if the number is positive, 
N if the number is negative, 
and Z if the number is zero */
int print_char(char c);

void positive_or_not(int n)
{
    if (n < 0)
      {
	print_char('N');
      }
    else if (n == 0)
      {
       print_char('Z');
      }
    else 
      {
	print_char('P');
      }
}
