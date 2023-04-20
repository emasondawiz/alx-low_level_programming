#include "variadic_functions.h"

/**
 * print_strings - Print Numbers
 * @n: Input value
 * @separator: Seperator
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list myaps;
	char *mystr;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(myaps, n);

	for (i = 0; i < n; i++)
	{
		mystr = va_arg(myaps, char *);
		if (mystr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", mystr);
		}
		if (i + 1 != n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(myaps);
}
