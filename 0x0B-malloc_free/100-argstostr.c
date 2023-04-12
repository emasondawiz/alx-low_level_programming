#include "main.h"

/**
 * argstostr - Function that displays string
 * @ac: iput value
 * @av: input value
 * Return: always success
 */

char *argstostr(int ac, char **av)
{
	char *mystr;

	 int len, a, k;

	 unsigned long int b;

	len = k = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		len = len + strlen(av[a]);
	}
	len = len + (ac + 1);

	mystr = (char *) malloc(len * sizeof(char));

	if (mystr == NULL)
	{
		free(mystr);
		return (NULL);
	}

	for (a = 1; a < ac; a++)
	{
		for (b = 0; b < strlen(av[a]); b++)
		{
			mystr[k++] = av[a][b];
		}
		mystr[k++] = '\n';
	}

	return (mystr);
}
