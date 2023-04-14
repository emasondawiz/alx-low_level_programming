#include "main.h"

/**
 * main - Entry point
 * @ac: Input
 * @argv: Input
 * Return: Always success
 */

int main(int ac, char *argv[])
{
	int *calc;

	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (atoi(argv[1]) <= 0 || atoi(argv[2]) <= 0)
	{
		printf("Error\n");
		exit(98);
	}
	calc = (int *)malloc((atoi(argv[1]) * atoi(argv[2])) * sizeof(int));

	if (calc == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	calc[0] = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", calc[0]);

	free(calc);

	return (0);
}
