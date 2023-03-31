#include "main.h"

/**
 * print_number - print all integers
 *
 * @a: Input variable
 *
 */

void print_number(int a)
{
	unsigned int n = a;

	if (n == 0)
	{
		_putchar(n + '0');
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}

		int i, j, numc, result, check, n1, counter;

		numc = 0;
		result = 0;
		check = n;

		do {
			numc = numc + 1;
			check = check / 10;
		} while (check != 0);

		for (i = numc; i > 0; i--)
		{
			n1 = 1;
			counter = 1;
			for (j = i; j > 0; j--)
			{
				counter = counter * n1;
				n1 = 10;
			}
			result = n / counter;
			_putchar(result + '0');
			result = n - (result * counter);
			n = result;
		}
	}
}
