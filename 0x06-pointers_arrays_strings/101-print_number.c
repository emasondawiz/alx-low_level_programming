#include "main.h"

/**
 * print_number - print all integers
 *
 * @n: Input variable
 *
 */

void print_number(int n)
{
	int numc, result, check, i, j, n1, counter;

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
