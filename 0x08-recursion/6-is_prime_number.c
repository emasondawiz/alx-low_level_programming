#include "main.h"

/**
 * is_prime_number - prime number function
 * @g: Input value
 * Return: Always success
 */

int is_prime_number(int g)
{
	return (myprime(g, g / 2));
}


/**
 * myprime - function that does prime
 * @n: Input value
 * @m: input value
 * Return: Always success
 */

int myprime(int n, int m)
{
	if (m == 1)
	{
		return (1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		if (n % m == 0)
		{
			return (0);
		}
		else
		{
			return (myprime(n, m - 1));
		}
	}
}
