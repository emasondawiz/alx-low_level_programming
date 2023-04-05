#include "main.h"

/**
 * _sqrt_recursion - show its root
 * @n: Input value
 * Return: Always success
 */

int _sqrt_recursion(int n)
{
	return (rootchecks(n, 1));
}

/**
 * rootchecks - find the root
 * @root: The root
 * @guess: The square root
 * Return: Always Success
 */

int rootchecks(int root, int guess)
{
	if (root == 0)
	{
		return (0);
	}
	else if (root == guess * guess)
	{
		return (guess);
	}
	else if (guess * guess > root)
	{
		return (-1);
	}
	else
	{
		return (rootchecks(root, guess + 1));
	}
}
