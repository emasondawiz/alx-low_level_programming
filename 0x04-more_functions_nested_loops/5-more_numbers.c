#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9
 *
 * Return: Always 0
 *
 */


void print_most_numbers(void)
{
	int a;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
