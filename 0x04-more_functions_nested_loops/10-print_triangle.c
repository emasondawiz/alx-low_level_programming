#include "main.h"

/**
 * print_triangle - function that print the shape of triangle
 *
 * @size: Input value of the function
 *
 */

void print_triangle(int size)
{
	int num, back, front, calc;

	if (size > 0)
	{
		for (num = 1; num <= size; num++)
		{
			calc = size - num;
			for (back = 1; back <= calc; back++)
			{
				putchar(' ');
			}
			for (front = 1; front <= num; front++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
