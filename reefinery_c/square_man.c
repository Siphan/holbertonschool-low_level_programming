#include "my_functions.h"
void first_line_last_line(int n)
{
  int x;
  print_char('o');

  for(x = 0; x < (n - 2); x++)
    {
      print_char('-');
    }
  print_char('o');
  print_char('\n');
}

void print_square(int n)
{
  int x;
  int y;

  if (n < 1)
    {
      return;
    }
  else if (n == 1)
    {
      print_char('o');
      print_char('\n');
    }
  else
    {
  
  first_line_last_line(n);  
  for(y = 0; y < (n - 2); y++) 
    {
      print_char('|');
      for(x = 0; x < (n - 2); x++)
	{
	  print_char(' ');
	}
      print_char('|');
      print_char('\n');
    }
  first_line_last_line(n);  
    }
}

    

  


