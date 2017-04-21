#include "holberton.h"

/**
 * _puts_recursion - print a string to sdtout, followed by a new line
 * @s: input string
 *
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion((s + 1));
	}
}
