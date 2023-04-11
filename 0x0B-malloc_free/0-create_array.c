#include "main.h"

/**
 * *create_array - Create an array with dynamic memory
 * @size: Input value
 * @c: Input value
 * Return: Always success
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *mychar = (char*) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		mychar[i] = c;
	}
	return (mychar);
}
