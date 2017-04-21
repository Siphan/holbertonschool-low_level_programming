#include <limits.h>
#include "holberton.h"

/**
 * _pow_recursion - return the value of x raised to the power of y.
 * @x: input number.
 * @y: exponent.
 *
 * Return: value of x raised to the power of y.
 * If y is negative, return -1.
 * If the result cannot be stored in an int, return -1.
 */

int _pow_recursion(int x, int y)
{
  int result = 0;

  if (y < 0)
  {
    return (-1);
  }

  /* If number is 1 or if exponent is 0, result is always 1 */
  else if ((x == 1) || (y == 0)) 
  {
    return (1);
  }

  else
  {
    /* Recursive func returns x to the power of y. Continues if y >= 0 */
    result = x * _pow_recursion(x, (y - 1));

    /* If the result cannot be stored in an int, the function returns -1. */
    if (result > INT_MAX)
    {
      return (-1);
    }
  }

  /* result is returned to main() function to be printed to stdout */
  return (result);
}
