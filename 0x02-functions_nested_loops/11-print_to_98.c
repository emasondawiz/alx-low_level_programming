#include "main.h"

/**
 * print_to_98 - print numbers from 98 above or below
 *
 * @n: Input variable
 *
 * Return: Always 0 (Success)
 *
 */

void print_to_98(int n)
{
	int num;

	if (n >= 98)
	{
		for (num = n; num > 98; num--)
		{
			printf("%d, ", num);
		}
	}
	else
	{
		for (num = n; n < 98; num++)
		{
			printf("%d, ", num);
		}
	}

	printf("98\n");

}
