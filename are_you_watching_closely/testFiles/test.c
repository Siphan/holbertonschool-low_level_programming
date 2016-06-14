#include<stdio.h>
#include<stdarg.h>

void Myprintf(char *,...); 				/*Our printf function */
char* convert(unsigned int, int); 		/*Convert integer number into octal, hex, etc. */


int main()
{
	Myprintf(" WWW.FIRMCODES.COM \n %d", 9);

	return 0;
}


void Myprintf(char* format,...)
{
	char *traverse;
	int i;
	char *s;

	/*Module 1: Initializing Myprintf's arguments */
	va_list arg; /* Linked list that will be able to contain our optional parameters */
	va_start(arg, format); /* Initializing our va_list */

	for(traverse = format; *traverse != '\0'; traverse++)
	{
		while( *traverse != '%' )
		{
			putchar(*traverse);
			traverse++;
		}

		traverse++;

		/*Module 2: Fetching and executing arguments */
		/*
		 * Macro va_arg will retrieve the next parameter given to your variadic function and return it.
		 * The first argument is the va_list that contains your varags.
		 * The second argument is the type of the parameter you want to retrieve.
		 * This macro 'returns' a value of the type you passed as the second argument.
		 */
		switch(*traverse)
		{
			case 'c' : i = va_arg(arg,int);		/*Fetch char argument. */
						putchar(i);
						break;

			case 'd' : i = va_arg(arg,int); 		/*Fetch Decimal/Integer argument */
						if(i < 0)
						{
							i = -i;
							putchar('-');
						}
						puts(convert(i,10));
						break;

			case 'o': i = va_arg(arg,unsigned int); /*Fetch Octal representation */
						puts(convert(i,8));
						break;

			case 's': s = va_arg(arg,char *); 		/*Fetch string */
						puts(s);
						break;

			case 'x': i = va_arg(arg,unsigned int); /*Fetch Hexadecimal representation */
						puts(convert(i,16));
						break;
		}
	}

	/*Module 3: Closing argument list to necessary clean-up */
	va_end(arg); /* Freeing our va_list */
}

char *convert(unsigned int num, int base)
{
	static char Representation[]= "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do
	{
		*--ptr = Representation[num%base];
		num /= base;
	}while(num != 0);

	return(ptr);
}
