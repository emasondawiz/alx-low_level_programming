#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 * puts: it print to screen..
 */

int main(void)
{
	int i, j, count, n;

	count = 99;

	n = 48;

	for (i = 0; i <= count; i++)
	{
		for (j = i; j <= count; j++)
		{
			if (j != i)
			{
				putchar((i / 10) + n);
				putchar((i % 10) + n);
				putchar(' ');
				putchar((j / 10) + n);
				putchar((j % 10) + n);

				if (i != count - 1 || j != count)
				{
					putchar(',');
					putchar(' ');
				}

			}
		}

	}

	putchar('\n');
	return (0);
}
