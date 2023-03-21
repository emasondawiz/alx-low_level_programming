#include "main.h"

/**
 * times_table - a function that produces the times table
 *
 * mydisplay -  mydisplay function populates the table in respect to the number
 *
 * Return: Always 0 (success)
 *
 */

void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		mydisplay(i);
		_putchar('\n');
	}
}

int mydisplay(int n)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int result = n * i;

		if (result <= 9)
		{
			_putchar(' ');
			_putchar(result + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar((result / 10) + 48);
			_putchar((result % 10) + 48);
			_putchar(',');
			_putchar(' ');
		}
	}
	return (0);
}
