#include "main.h"

/**
 * print_binary - Function that prints a binary
 * @n: Input value
 */

void print_binary(unsigned long int n)
{
	int count = 0, i, j;
	long int nn = (long int) n;
	long int holder, result = 0, curr = 1, previous = 0, basepower = 1;

	if (nn < 0)
		nn = -(nn);
	holder = nn;

	while (curr + previous < nn)
	{
		previous = previous + curr;
		curr = curr * 2;
		count = count + 1;
	}
	for (i = count; i >= 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			basepower = basepower * 2;
		}
		if (holder - basepower >= 0)
		{
			_putchar('1');
			result = holder - basepower;
			holder = result;
		}
		else
		{
			_putchar('0');
		}
		basepower = 1;
	}
}
