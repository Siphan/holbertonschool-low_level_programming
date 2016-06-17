/* Code written by Sergey */

#include <stdio.h>


typedef int (*ProcessingFunction)(const char *, int, va_list&);



int processInteger(const char *format, int idx, va_list& args) {
  next = va_arg (args, int); /* Fetch Decimal/Integer argument */
  print_number(next);
  return 2;
}

int processString(const char *format, int idx, va_list& args) {
  addr = va_arg(args, char *);     /* Fetch string */
  str_size = print_string(addr);
  return str_size - 2;
}

int processDefault(const char *format, int idx, va_list& args) {
  print_char(format[i]);
  print_char(format[i+1]);
  return 2;
}
 


int main(void) {
  ProcessingFunction processors[256] = {};
    
  for (int i = 0; i < 256; i++) {
    processors[i] = processDefault;
  }
    
  processors['d'] = processInteger;
  processors['i'] = processInteger;
  processors['s'] = processString;
    
  int size = 0;    
    
  for(i = 0; format[i] != '\0'; i++) {
    if(format[i] == '%') {
      char c = format[i + 1];
      ProcessingFunation f = processors[c];
      size = size + f(format, i, args);
    }
    else {
      print_char(format[i]); /* Fetch char argument by default */
    }
  }    
}
