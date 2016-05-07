/* Function that frees a struct String */
#include <stdlib.h>
#include "str_struct.h" /* Uses the function free */

void free_string_struct(struct String *str)
{
    free (str->str);
    free (str);
}
