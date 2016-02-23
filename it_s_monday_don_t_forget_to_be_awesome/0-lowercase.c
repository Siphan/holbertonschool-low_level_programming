char lowercase(char c)
{
  if ((c >= 'A') && (c <= 'Z')) { /* If c is a capital letter */
    c=c+32; /* Adds 32 to the ascii value of c which corresponds to lowercase c */
  }
  return c; /* Prints c */
}
  
