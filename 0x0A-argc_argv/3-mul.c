#include "main.h"

/**
 * main - Entry point
 * @argc: Input value
 * @argv: Input
 * Return: Always success
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		sum = sum * atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
