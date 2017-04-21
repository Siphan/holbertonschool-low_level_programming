#include "holberton.h"

/**
 * is_palindrome - return 1 if an input string is a palindrome and 0 if not.
 * @s: input string.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
/* Call recursive func that checks whether string is a palindrome */
{
	int i;

	i = (_strlen_recursion(s) - 1);

	return (check_palindrome(s, i));
}

/**
 * _strlen_recursion - return the length of a string.
 * @s: input string.
 *
 * Return: the string length (int).
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

  else
  {
    return (1 + (_strlen_recursion(s + 1)));
  }
}

/**
 * check_palindrome - check if a given string is a palindrome.
 * @s: input string.
 * @i: length of the string.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int check_palindrome(char *s, int i)
{
	if (i < 1)
	{
		return (1);
	}

	if (*s != *(s + i))
	{
		return (0);
	}

	return (check_palindrome((s + 1), (i - 2)));
}
