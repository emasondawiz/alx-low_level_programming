#include "main.h"

/**
 * flip_bits - function that flips
 * @n: input value
 * @m: input value
 * Return: always success
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, num = 0;
	unsigned long int curr, exc = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		curr = exc >> j;
		if (curr & 1)
			num += 1;
	}

	return (num);
}
