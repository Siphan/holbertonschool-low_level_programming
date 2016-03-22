/* This function capitalizes all words of a string, ie
it capitalizes the first letter of each word that
comes after a space, newline, tab, or is 
the first word of that string. */

char *cap_string(char *c) {
  int i;

  for (i = 0; c[i]; i++) { /* For loop using counter */
    if (i == 0 && c[i] > 96 && c[i] < 123) { /* Capitalizes the first letter of the string */
      c[i++] -= 32;
    }
    
    if (c[i] == ' ' || c[i] == '\n' || c[i] == '\t') { /* Capitalizes the first letter of each word that comes after a space, newline or tab */
      if (c[i+1] > 96 && c[i+1] < 123) {
	c[++i] -= 32;
      }    
    }
  }
  
  return c;
}
