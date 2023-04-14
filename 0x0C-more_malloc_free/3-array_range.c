#include "main.h"

/**
 * array_range - Function
 * @min: input value
 * @max: input value
 * Return: always success
 */
int *array_range(int min, int max)
{
	int *myptr;
	int i, num;

	if (min > max)
		return (NULL);

	num = (max - min + 1);

	myptr = malloc(sizeof(int) * num);
	if (myptr == NULL)
		return (NULL);

	for (i = 0; i < num; i++)
	{
		myptr[i] = min++;
	}

	return (myptr);
}
