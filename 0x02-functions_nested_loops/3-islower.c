#include "main.h"

/**
 * _islower - a function that checks for lowercase
 *
 * @c: char is the input of the function
 *
 * Return: Always 0 (Success)
 *
 */

int _islower(int c)
{
	if (islower(c) > 0)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	_putchar('\n');
	return (0);
}
