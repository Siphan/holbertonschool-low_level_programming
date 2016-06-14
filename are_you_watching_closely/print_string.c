#include "prototypes.h"

/*
 * Function that prints a string
 * one char at a time using print_char.c
 */
int print_string(char *str)
{
  int i;
  for (i = 0; str[i] != '\0'; i++) {
    print_char(str[i]);
  }
  return i;
}
