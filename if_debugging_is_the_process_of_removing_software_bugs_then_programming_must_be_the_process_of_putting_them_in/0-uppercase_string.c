/* This function changes all lowercase letters of a string to uppercase */
char *uppercase_string(char *c) {
  int i;

  for (i = 0; c[i]; i++) {
    if (c[i] > 96 && c[i] < 123) {
      c[i] -= 32;
    }
  }

  return c; 
}

