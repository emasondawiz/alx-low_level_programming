#include "main.h"

/**
 * _strdup - Duplicate a string
 * @str: Input value
 * Return: Always Success
 */

char *_strdup(char *str)
{
	int i, size;
	char *mychar;

	if (str == NULL)
	{
		return (NULL);
	}

	size = strlen(str);

	if (size == 0)
	{
		size = size + 1;
	}

	mychar = (char *) malloc((size + 1) * sizeof(char));

	if (mychar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		mychar[i] = str[i];
	}
	return (mychar);
}
