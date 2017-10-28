#include "holberton.h"

/**
 * is_prime_number - check if a given integer is a prime number.
 * @n: input number.
 *
 * Return: 1 if the input integer is a prime number, 0 if not.
 */
int is_prime_number(int n)
/* Call recursive func that checks whether n is a prime number */
{
		return (check_prime(n, 2)); /* Divisor starts at 2 */
}

/**
	* check_prime - check if a given integer is a prime number.
	* @n: input number.
	* @i: divisor.
	*
	* Return: 1 if n is a prime number, 0 if not.
	*/
int check_prime(int n, int i)
{
	/* Prime numbers are greater than 1 */
	if (n <= 1)
	{
		return (0);
	}

	/* If n is an even number, it's not a prime */
	else if (n % 2 == 0)
	{
		return (0);
	}

	/* As soon as a divisor of n is found, n is not a prime */
	else if (n % i == 0)
	{
		return (0);
	}

	/* Exit condition. If no divisor between 2 and (n / 2) is found, n is prime */
	else if (i >= (n / 2))
	{
		return (1);
	}

	else
	{
		/* Function calls itself, incrementing divisor by 1 at every call */
		return (check_prime(n, (i + 1)));
	}
}
