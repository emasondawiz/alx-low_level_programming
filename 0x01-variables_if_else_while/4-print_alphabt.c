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
	int i, count;

	char ch[] = "abcdfghijklmnopqrstuvwxyz";

	count = strlen(ch);

	for (i = 0; i < count; i++)
	{
		if (ch[i] != 'q' && ch[i] !='e')
		{
			putchar(ch[i]);
		}

	}

	putchar('\n');
	return (0);
}
