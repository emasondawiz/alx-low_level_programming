#include "main.h"

/**
 * main - Entry point
 * @argc: Input value
 * @argv: Input value
 * Return: Success
 */

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;


	return (1);
}

/**
* count_str - counts the length of a string
* @str: the string iput
* Return: Returns the length of the string
*/
int count_str(char *str)
{
	int counter = 0;

	while (*str)
	{
		counter = counter + 1;
		str++;
	}
	return (counter);
}
