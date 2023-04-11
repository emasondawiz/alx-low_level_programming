#include "main.h"

/**
 * _strdup - Duplicate a string
 * @str: Input value
 * Return: Always Success
 */

char *_strdup(char *str)
{
	int i;
	int size = strlen(str);

	char *mychar = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
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
