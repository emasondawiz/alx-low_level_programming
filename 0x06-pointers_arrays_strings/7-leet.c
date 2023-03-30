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
	int len, i;
	char content;

	len = strlen(input);
	for (int i = 0; i < len; i++)
	{
		if (input[i] == 'a' || input[i] == 'A')
		{
			content = '4';
		}
		else if (input[i] == 'e' || input[i] == 'E')
		{
			content = '3';
		}
		else if (input[i] == 'o' || input[i] == 'O')
		{
			content = '0';
		}
		else if (input[i] == 't' || input[i] == 'T')
		{
			content = '7';
		}
		else if (input[i] == 'l' || input[i] == 'L')
		{
			content = '1';
		}
		else
		{
			content = input[i];
		}
		input[i] = content;
	}
	return (input);
}
