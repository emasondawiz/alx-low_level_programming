#include "main.h"

/**
 * rev_string - it prints the reverse of a string
 *
 * @s: input variable
 *
 */

void rev_string(char *s)
{
	int len = strlen(s) - 1;

	int j, i;

	char content;

	for (j = len, i = 0; j >= 0; j--, i++)
	{
		content = s[j];
		s[j] = s[i];
		s[i] = content;
	}

}
