/* function that copies a string */
char *string_ncopy(char *dest, const char *src, int n){
  char *s = dest;
  while (n > 0 && *src != '\0') {
    *s++ = *src++;
    --n;
  }
  while (n > 0) {
    *s++ = '\0';
    --n;
  }
  return dest;
}
