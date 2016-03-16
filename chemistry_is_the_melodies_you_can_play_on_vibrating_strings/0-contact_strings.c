/* This function concatenates two strings, ie it appends the string pointed by *src to the string pointed by *dest */
char *concat_strings(char *dest, const char *src) {
  int i; /* Declaring counter */

  for (i = 0; *(dest + i); i++) { /* Using counter to print one char at a time */ 
    ;
  }
  while (*src) { 
    *(dest + i) = *src++; /* Pointer dest string now points to the src string */
    i++;
  }

  *(dest + i) = '\0'; 
  
  return dest;
}
