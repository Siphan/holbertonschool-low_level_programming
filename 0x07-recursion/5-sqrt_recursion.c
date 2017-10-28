#include "holberton.h"

/**
 * _sqrt_recursion - return the natural square root of a number.
 * @n: input number.
 *
 * Return: the natural square root of n.
 */
int _sqrt_recursion(int n)
/* Call the recursive func that either returns the square root of n or -1 */
{
		return (find_root(n, 0));
}

/**
 * find_root - return the natural square root of a number.
 * @n: input number.
 * @root: int that iterates until square root of n is found.
 *
 * Return: the natural square root of n.
 */
int find_root(int n, int root)
{
	if (root * root == n)
	{
		return (root); /* The square root of n is found */
	}

	/* If no integer square root found or if n is negative, returns -1 */
	else if (root * root > n)
	{
		return (-1);
	}

	/* Loops again until either of the 2 conditions above is met */
	else
	{
		return (find_root(n, (root + 1)));
	}
}
