#include "main.h"

/**
 * _isdigit - it checks for digit
 *
 * @c: the input value of the _isupper function
 *
 * Return: Always 0
 *
 */


int _isdigit(int c)
{
	int i, count;

	count = 0;

	for (i = 0; i <= 9; i++)
	{
		if (c == i)
		{
			count = count + 1;
			break;
		}
	}
	return (count);
}
