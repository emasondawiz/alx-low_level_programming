#include "main.h"

/**
 * str_concat - Return the combination of two strings
 * @s1: Input value
 * @s2: Input value
 * Return: Always Success
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, n;
	char *mystr;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	size1 = strlen(s1);
	size2 = strlen(s2);
	n = size1 + size2;

	mystr = (char *) malloc(n * sizeof(char));

	strcat(mystr, s1);
	strcat(mystr, s2);

	if (mystr == NULL)
	{
		return (NULL);
	}
	return (mystr);
}
