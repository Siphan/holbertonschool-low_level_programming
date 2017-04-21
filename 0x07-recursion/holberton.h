#ifndef _HOLBERTON.H_
#define _HOLBERTON.H_

/* Function that prints a string, followed by a new line */
void _puts_recursion(char *s);

/* Function that prints a string in reverse */
void _print_rev_recursion(char *s);

/* Function that returns the length of a string */
int _strlen_recursion(char *s);

/* Function that returns the factorial of a given number */
int factorial(int n);

/* Function that returns the value of x raised to the power of y */
int _pow_recursion(int x, int y);

/* Function that returns the natural square root of a number */
int _sqrt_recursion(int n);

/* Function that returns 1 if the input integer is a prime number, 0 if not */
int is_prime_number(int n);

/* Function that returns 1 if a string is a palindrome and 0 if not */
int is_palindrome(char *s);

/*
 * Function that compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2); 

#endif _HOLBERTON.H_
