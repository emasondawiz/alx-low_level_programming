#include "main.h"

/**
 * print_diagonal - it print lines
 *
 * @n: input value of print_line
 *
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int a = 0;

		for (a = 0; a < n; a++)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
