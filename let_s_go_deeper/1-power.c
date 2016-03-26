/* This recursive function returns the value of x raised to the power of y */
int power(int x, int y) {
  
  if (y < 0) {
    return (-1); /* If y is lower than 0, the function returns -1 */
  }
  else if(y == 0) { /* Terminating case */
    return (1); /* Any number with an exponent of 0 is equal to 1 */
  }
  else { 
    return (x * power (x, y-1)); /* Recursive step. Function power calls itself here */
  }
}

