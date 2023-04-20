#include <stdio.h>
#include <stdlib.h>


/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument count
 * Return: Always success
 */

int main(int argc, char *argv[])
{
	int mybyte;

	mybyte = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (mybyte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	return (0);



}
