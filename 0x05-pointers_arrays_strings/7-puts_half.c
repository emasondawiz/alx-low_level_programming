#include "main.h"

/**
 * puts_half - function that returns half of the string
 *
 * @str: input value
 *
 */

void puts_half(char *str)
{
	int len = strlen(str);

	int new, i;

	if (len % 2 != 0)
	{
		new = (len - 1) / 2;
	}
	else
	{
		new = len / 2;
	}
	for (i = new; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
