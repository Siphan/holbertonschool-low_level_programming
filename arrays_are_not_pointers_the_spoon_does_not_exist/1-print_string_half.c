int print_char(char c); /* Prototype */
void print_string_half(char *str) /* Function to print the second half of a string */
{
  int i; /* i is index */

  for (i = 0; *str++; i++) { /* starting with index 0 of the array and incrementing the index to get the length of str */
  }
  for (i /= -2, str--; i; i++) { /* /= divides left operand by right operand and assigns result to left operand */
    print_char(str[i]); 
  }   
}

  /*  i = 0;
  for(i=1; i>1; i++)
    {
  if(*str<6) {
       }
  else {
    print_char(*str);
      }
    }
} */  
