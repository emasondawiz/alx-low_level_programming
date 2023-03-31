#include "main.h"

/**
 * print_number - print all integers
 *
 * @num: Input variable
 *
 */

void print_number(int num)
{
	if (num == 0)
	{
		_putchar(num + '0');
	}
	else
	{
		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}

		int i, j, numc, result, check, n, counter;

		numc = 0;
		result = 0;
		check = num;

		do {
			numc++;
			check = check / 10;
		} while (check != 0);

		for (i = numc; i > 0; i--)
		{
			n = 1;
			counter = 1;
			for (j = i; j > 0; j--)
			{
				counter = counter * n;
				n = 10;
			}
			result = num / counter;
			_putchar(result + '0');
			result = num - (result * counter);
			num = result;
		}
	}
}
