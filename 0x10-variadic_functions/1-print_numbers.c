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

	if (n == 0)
	{
		return;
	}

	va_start(myaps, n);

	for (i = 0; i < n; i++)
	{
		if (i + 1 == n)
		{
			printf("%d\n", va_arg(myaps, int));
		}
		else
		{
			if (separator != NULL)
				printf("%d%s", va_arg(myaps, int), separator);
			else
				printf("%d", va_arg(myaps, int));
		}
	}
	va_end(myaps);
}
