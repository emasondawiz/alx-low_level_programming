
#include "main.h"

/**
 * _atoi - function that convert string to integer
 *
 * @s : Input variable
 *
 * Return: Always 0
 *
 */

int _atoi(char *s)
{
	unsigned int len, minuscheck, num, i;

	len = strlen(s);
	minuscheck = 0;
	num = 0;

	for (i = 0; i < len ; i++)
	{
		if (s[i] == '-')
			minuscheck++;

		if (isdigit(s[i + 1]))
			break;
	}

	for (i = 0; i < len ; i++)
	{
		if (isdigit(s[i]))
		{
			num = (num * 10) + (s[i] - '0');
			if (!isdigit(s[i + 1]))
				break;
		}
	}

	if (minuscheck % 2 == 1)
		num = -num;

	return (num);
}
