/* This function concatenates two strings */
char *nconcat_strings(char *dest, const char *src, int n) {

  /* strncat(dst, src, n)/
   *  char *dest;
   *const char *src;
   * register size_t n;
   */

  if (n != 0) {
    ;
    
    while (*dest != 0) {
      dest++;
    }
    do {
      if ((*dest = *src++) == 0)
	break;
      dest++;
    } while (--n != 0);
    *dest = 0;
  }
  return (dest); /* Output is different than expected. Debug and update. */
}
