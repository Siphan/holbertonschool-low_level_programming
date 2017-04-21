/* Function that prints a string in reverse */
void _print_rev_recursion(char *s);

#include "holberton.h"

/**
 * _print_rev_recursion - print a string in reverse.
 * @s: input string.
 *
 * Return: nothing.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
