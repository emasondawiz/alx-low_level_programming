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

	if (s1 == NULL)
		size1 = 1;
	else
		size1 = strlen(s1);

	if (s2 == NULL)
		size2 = 1;

	else
		size2 = strlen(s2);

	n = size1 + size2;
	if (n == 0)
		return (NULL);

	mystr = (char *) malloc(n * sizeof(char));

	if (s1 == NULL)
		strcat(mystr, "");
	else
		strcat(mystr, s1);
	if (s2 == NULL)
	{
		strcat(mystr, "");
	}
	else
	{
		strcat(mystr, s2);
	}
	if (mystr == NULL)
	{
		return (NULL);
	}
	return (mystr);
}
