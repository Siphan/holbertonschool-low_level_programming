/* Function that frees a struct String */
#include <stdlib.h> /* Uses the function free */
#include "str_struct.h" 

void free_string_struct(struct String *str)
{
    free (str->str);
    free (str);
}
