/* This function returns 1 if a string is a palindrome and 0 if not */
/* Calculates length of string */
int str_len(char *s, int c) {
  if (*(s + c) == 0) {
    return c;
  }
  return str_len(s, c + 1);
}
/* Checks for palindrome using a counter(start) & length of string */
int palin_check(int start, int length, char *s) {
  if (s[start] != s[(length-start)-1]){
    return 0;
  }
  else if (start >= length) {
    return 1;
  }
  else {
    return palin_check(start+1, length, s);
  }
}
/* Calls palin_check with string, length and starting values */
int is_palindrome(char *s) {
  int start, length;
  start = 0;
  length = str_len(s, 0);
  return palin_check(start, length, s);
}
