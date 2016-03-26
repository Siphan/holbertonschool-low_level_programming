/* This function returns the natural square root of a number */
int findsqrt(int n ,int count) {
  if (count * count == n) {
    return (count);
  }
  if (count * count > n) {
    return (-1); /* If n does not have an natural square root, the function returns -1 */
  }
  return (findsqrt(n, count+1));
  return (0);
}

int square_root(int n) {
  return (findsqrt(n, 1));
}

  /*
int square_root(int n) {
  
  if (){
    return (-1);  If n does not have an natural square root, the function should return -1  
  }
  else {
  }
}
  */
