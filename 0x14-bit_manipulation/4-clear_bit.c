#include "main.h"

/**
 * clear_bit - function that sets bit to zero(0)
 * @n: Input value
 * @index: input value
 *Return: always success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
