#include "main.h"

/**
 * main - Entry point
 * @argc: Argument Counts
 * @argv: Arrays of argument
 * Return: Always success
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	if (argc - 1 == 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + atoi(argv[i]);
		}
	}

	printf("%d\n", sum);
	return (0);
}
