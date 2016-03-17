/* This function concatenates two strings */
  char *nconcat_strings(char *dest, const char *src, int n){
    if (n != 0) {
      char *d = dest;
      const char *s = src;

      while (*d != 0)
	d++;
      do {
	if ((*d = *s++) == 0)
	  break;
	d++;
      } while (--n != 0);
      *d = 0;
    }
    return (dest);
  }
