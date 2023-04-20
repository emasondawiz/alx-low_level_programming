#include "variadic_functions.h"

/**
 * print_numbers - Print Numbers
 * @n: Input value
 * @separator: Seperator
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list myaps;

	va_start(myaps, n);

	for (i = 0; i < n; i++)
	{
		if (i + 1 == n)
		{
			printf("%d", va_arg(myaps, int));
		}
		else
		{
			if (separator == NULL)
			{
				printf("%d", va_arg(myaps, int));
			}
			else
			{
				printf("%d%s", va_arg(myaps, int), separator);
			}
		}
	}
	printf("\n");

	va_end(myaps);
}
