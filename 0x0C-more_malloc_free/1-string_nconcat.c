#include "main.h"

/**
 * string_nconcat - Return the combination of two strings
 * @s1: Input value
 * @s2: Input value
 * @n: Input value
 * Return: Always Success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, len;
	char *mystr;

	if (s1 == NULL)
		s1 = "";
	size1 = strlen(s1);

	if (s2 == NULL)
		s2 = "";

	size2 = strlen(s2);

	if (size2 > n)
		size2 = n;
	len = size1 + size2;

	mystr = (char *) malloc((len + 1) * sizeof(char));

	if (mystr == NULL)
	{
		return (NULL);
	}
	strcat(mystr, s1);
	strncat(mystr, s2, n);
	strcat(mystr, "\0");
	return (mystr);
}

