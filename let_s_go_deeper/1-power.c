/* This recursive function returns the value of x raised to the power of y */
int power(int x, int y) {
  
  if (x < 0 || y < 0 ) {
    return (-1); /* If x or y is lower than 0, the function returns -1 */
  }
  else if(y == 0) { /* Terminating case */
    return (1); /* Any number with an exponent of 0 is equal to 1 */
  }

  else { 
    long z = (x * power (x, y-1)); /* Recursive step. Function power calls itself here */
    if ( z >  2147483647 || z < 0){ /* If the result can not be stored in an int or if result is negative, return -1 */
      return (-1);
    }
    else {
      return (z); /* Return result to be printed */
    }
  }
}

