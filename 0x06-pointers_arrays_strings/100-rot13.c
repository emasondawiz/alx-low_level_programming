#include "main.h"

/**
 * rot13 - Coded
 *
 * @input: Input value
 * Return: Always 0
 *
 */

char *rot13(char *input)
{
	int len, lens, i, j;

	char s[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
	char num[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";


	len = strlen(input);
	lens = strlen(num);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < lens; j++)
		{
			if (input[i] == s[j])
			{
				*(input + i) = num[j];
				break;
			}
		}
	}
	return (input);
}
