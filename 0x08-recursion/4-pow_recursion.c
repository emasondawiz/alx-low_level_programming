#include "main.h"

/**
 * _pow_recursion - function of square
 * @x: Input value
 * @y: Input
 * Return: Always success
 */

int _pow_recursion(int x, int y)
{
	if (x == 1)
	{
		return (1);
	}
	else if (x == 0)
	{
		return (0);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
