#include "main.h"

/**
 * get_bit - Function that gets bit
 * @n: Input value
 * @index: Input value
 * Return: Always success
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int temp, div, mod = 0, counter = 0, nt = 0, i;

	char *arr;

	temp = n, div = n;

	if ((int)index < 0)
		return (-1);
	while (temp / 2 > 0)
	{
		temp /= 2;
		counter += 1;
	}
	if (index > counter)
		return (-1);
	counter = counter + 1;

	arr = (char *)malloc(counter * sizeof(char));
	for (i = 0; i < counter; i++)
	{
		mod = div % 2;
		div = div / 2;
		if (index == i)
			return (mod);
	}
	free(arr);
	return (nt);
}
