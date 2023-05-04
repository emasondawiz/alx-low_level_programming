#include "main.h"


/**
 * binary_to_uint - function that converts from binary to int
 * @b: Input value
 * Return: Always Success
 */

unsigned int binary_to_uint(const char *b)
{
	int counter = 0, i, j = 0, l, exp = 1, sum = 0;

	if (b == NULL)
		return (sum);

	while (b[counter] != '\0')
	{
		counter = counter + 1;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (j > 0)
		{
			for (l = 0; l < j; l++)
			{
				exp = exp * 2;
			}
		}
		if (b[i] == '0')
		{
			sum = sum + 0 * exp;
		}
		else if (b[i] == '1')
		{
			sum = sum + 1 * exp;
		}
		else
		{
			sum = 0;
			return (sum);
		}
		j++;
		exp = 1;
	}
	return (sum);
}
