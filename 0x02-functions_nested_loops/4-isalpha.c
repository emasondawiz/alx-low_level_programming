#include "main.h"


/**
 * _isalpha - a function that checks for alphabet
 *
 * @c: char is the input of the function
 *
 * Return: Always 0 (Success)
 *
 */

int _isalpha(int c)
{
	if (isalpha(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

