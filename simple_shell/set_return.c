/* Function that sets the return value of our C-shell */
#include <unistd.h>
#include "libshell.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "my_functions.h"

void set_return(int *ret_value, char *s)
{
	int i;

	if (s == NULL) { /* If no value is returned, returns 0 */
		*ret_value = 0;
		return;
	}
	for (i = 0; s[i] != '\0'; i++) { /* If the value returned is anything else than the char from 0 to 9, returns 0 */
		if (s[i] < '0' || s[i] > '9') {
			*ret_value = 0;
			return;
		}
	}

	*ret_value = string_to_integer(s); /* Otherwise, stores the address of string_to_integer into the returned value */
}
