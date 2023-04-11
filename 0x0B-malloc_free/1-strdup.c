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
	
	size = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}
	else if (size == 0)
	{
		size = size + 1;
	}

	mychar = (char *) malloc(size * sizeof(char));

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
