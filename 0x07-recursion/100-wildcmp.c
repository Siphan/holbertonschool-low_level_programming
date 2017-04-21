#include "holberton.h"
/**
 * wildcmp - compare and check if two strings can be considered identical.
 * @s1: first input string
 * @s2: second input string that can contain the character * (wildcard).
 *
 * Return: 1 if the strings can be considered identical, 0 if not.
 */
int wildcmp(char *s1, char *s2)
{
  if ((*s1 == '\0') && (*s2 == '\0'))
  {
    return (1);
  }

  else if (*s1 == *s2)
  {
    return (wildcmp((s1 + 1), (s2 + 1)));
  }

  else if (*s2 == '*')
  {
    if ((wildcmp(s1, (s2 + 1))) || (wildcmp((s1 + 1), s2)))
    {
      return (1);
    }
    else if (*(s1 + 1) != '\0' && *s2 == '\0')
    {
      return (0);
    }
  }

  return (0);
}
