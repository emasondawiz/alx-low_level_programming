#include "main.h"

/**
 * puts2 - function that prints
 *
 * @str: Input value
 *
 */

void puts2(char *str)
{
	int len = strlen(str);

	int i;

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
}
