#include "main.h"

/**
 * leet - Coded
 *
 * @input: Input value
 * Return: Always 0
 *
 */

char *leet(char *input)
{
	int len, lens, i, j;


	char s[] = "AEOTLaeotl";
	char num[] = "4307143071";


	len = strlen(input);
	lens = strlen(num);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < lens; j++)
		{
			if (input[i] == s[j])
			{
				*(input + i) = num[j];
			}
		}
	}
	return (input);
}
