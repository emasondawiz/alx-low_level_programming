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
		size1 = 1;
	else
		size1 = strlen(s1);

	if (s2 == NULL)
		size2 = 1;

	else
		size2 = strlen(s2);

	len = size1 + n;
	if (len == 0)
		len = 1;

	mystr = (char *) malloc((len + 1) * sizeof(char));

	if (s1 == NULL)
		strcat(mystr, "");
	else
		strcat(mystr, s1);
	if (s2 == NULL)
		strcat(mystr, "");
	else if (n >= size2)
		strcat(mystr, s2);
	else
	{
		strncat(mystr, s2, n);
	}
	if (mystr == NULL)
	{
		return (NULL);
	}
	return (mystr);
}

