//
// for(n = 1; n > 3; n--) {0
//   print_char('\\');
//   print_char(' ');
//   print_char('/');
// }
int print_char(char c);
void print_square(int n);
void firstorlastline(int n);

int main(void)
{
  print_square(0);
  print_square(1);
  print_square(2);
  print_square(3);
  print_square(4);
  print_square(10);
  print_square(-2);
  return (0);
}

void print_square(int n)
{
  int w;
  int h;

  if (n <= 0) {
    return;
  }
  if (n == 1) {
    print_char('X');
    print_char('\n');
  }
  else if (n % 2 == 0) {
    /* firstorlastline(n); */

    for (h = 0; h < (n-2); h++) {
      print_char('\\');
      for (w = 0; w < (n-2); w++) {
	print_char(' ');
      }
      print_char('/');
      print_char('\n');
    }
  /* firstorlastline(n); */
  }

  else {
    for (h = 0; h < (n-2); h++) {
      print_char('\\');
      for (w = 0; w < (n-2); w++) {
        if (h == (n / 2 + 1)) {
          print_char('X');
        }
  print_char(' ');
      }
      print_char('/');
      print_char('\n');
    }
  }
}



// void firstorlastline(int n) {
//   int w;
//
//   print_char('\\');
//   for (w = 0; w < (n-2); w++) {
//     print_char('-');
//   }
//   print_char('o');
//   print_char('\n');
// }
