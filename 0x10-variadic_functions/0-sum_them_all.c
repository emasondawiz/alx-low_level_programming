#include "variadic_functions.h"

/**
 * sum_them_all - Sums all
 * @n: Input value
 * Return: Always success
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;

	va_list myaps;

	sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(myaps, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(myaps, int);
	}

	va_end(myaps);

	return (sum);
}
