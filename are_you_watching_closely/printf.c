/*
 * This program recodes the function printf of the C library.
 * Macro va_arg retrieves the next parameter given to our variadic function printf
 * and returns it.
 * The first argument is the va_list that contains our varargs.
 * The second argument is the type of the parameter we want to retrieve.
 * This macro 'returns' a value of the type we pass as the second argument.
 */

#include <stdarg.h>
#include "prototypes.h"

int printf(const char *format, ...)
{
  int i, next, size, str_size;
  char *addr;
  long long_num;
  char letter;
  va_list args; /* Linked list that will be able to contain our optional parameters */

  size = 0;
  va_start(args, format); /* Initializing our va_list */

  for(i = 0; format[i] != '\0'; i++) {
      if(format[i] == '%') {
          if(format[i+1] == 'd' || format[i+1] == 'i') {
            next = va_arg (args, int); /* Fetch Decimal/Integer argument */
            print_number(next);
            size = size + 2;
          }
          else if(format[i+1] == 'u') {
            long_num = va_arg(args, long); /* Fetch Long Integer argument */
            print_longnumber(long_num);
            size = size + 8;
          }
          else if(format[i+1] == 'p') {
            long_num = va_arg(args, long); /* Fetch Hexadecimal representation lowercase */
            print_char('0');
            print_char('x');
            decimal_to_hex_lower(long_num);
            size = size + 8;
          }
          else if(format[i+1] == 's') {
            addr = va_arg(args, char *); 	/* Fetch string */
            str_size = print_string(addr);
            size = size + str_size - 2;
          }
          else if(format[i+1] == 'o') {
            next = va_arg(args, int);
            print_number(next);
            size = size + 4;
          }
          else if(format[i+1] == 'x' || format[i+1] == 'X') {
            long_num = va_arg(args, long);  /* Fetch Hexadecimal representation uppercase */
            decimal_to_hex_upper(long_num);
            size = size + 8;
          }
          else if(format[i+1] == 'c') { /* Fetch char argument */
            letter = va_arg(args, int);
            print_char(letter + '0');
            size = size + 1;
          }
          else {
            print_char(format[i]);
            print_char(format[i+1]);
            size = size + 2;
          }
          i = i + 1;
          }
      else
        print_char(format[i]); /* Fetch char argument by default */
    }
  va_end(args); /* Freeing our va_list */
  size = size + i - 2;
  return (size);
}
