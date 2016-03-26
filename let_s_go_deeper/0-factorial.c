/* This is a recursive function that returns the factorial of a given number */
int factorial(int n) {
  int res = 0; 

  if(n < 0)
    {
      return (-1); /* If n is lower than 0, the function returns -1 to indicate an error */
    }
  else if(n == 0) /* Terminating case */
    {
      return (1); /* Factorial of 0 is 1 */
    }
  else
    {
      res  = n * factorial(n-1); /* Recursive step. The function factorial calls itself here, this is what makes it recursive  */
      return (res); 
    }
}

