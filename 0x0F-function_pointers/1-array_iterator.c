#include "function_pointers.h"

/**
 * array_iterator - array iterating function
 * @size: Size of an array
 * @action: pointer function
 * @array: array elements
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL || size == 0)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
