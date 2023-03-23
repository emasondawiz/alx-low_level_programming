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
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
