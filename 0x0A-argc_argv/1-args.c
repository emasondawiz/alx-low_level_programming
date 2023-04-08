#include "main.h"

/**
 * main - Entry point
 * @argc: Input value
 * @argv: Input
 * Return: Always success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	printf("%d\n", argc);
	return (0);
}
