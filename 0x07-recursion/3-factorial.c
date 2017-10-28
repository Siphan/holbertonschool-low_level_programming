#include <limits.h>
#include "holberton.h"

/**
 * factorial - return the factorial of a given integer.
 * @n: input integer.
 *
 * Return: the factorial of n.
 */
int factorial(int n)
{
	int result = 0;

	/* Factorial of 0 is 1 */
	if (n == 0)
	{
		return (1);
	}

	/* If n is lower than 0, the function returns -1 to indicate an error. */
	else if (n < 0)
	{
		return (-1);
	}

	else
	{
		result = n * factorial(n - 1); /* Recursive function returns a factorial */

		/* If the result cannot be stored in an int, the function returns -1. */
		if (result > INT_MAX)
		{
			return (-1);
		}
	}

	/* result is returned to main() function to be printed to stdout */
	return (result);
}
