#include "function_pointers.h"

/**
 * int_index - function
 * @array: Array elements
 * @size: Array Size
 * @cmp: pointer function
 * Return: always Success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, counter;

	counter = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
		{
			return (i);
		}
	}
	if (counter == 0)
		return (-1);
	return (counter);
}
