int print_char(char);

/* This function prints a horizontal line the length of n */
void print_line(int n) {
  while(n-- > 0) {
    print_char('_');
  } 
  print_char('\n');
}
