#include "main.h"

/**
 * print_diagsums - Print diagsums
 * @a: input value
 * @size: input value
 */
void print_diagsums(int *a, int size)
{
	int i, j, d;

	long int sumoffirstdiagonal, sumofsecondiagonal;

	sumoffirstdiagonal = sumofsecondiagonal = d = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sumoffirstdiagonal = sumoffirstdiagonal + a[i * size + i];
		}
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == size - 1 - d)
			{
				sumofsecondiagonal = sumofsecondiagonal + a[i * size + j];
				d = d + 1;
			}
		}
	}
	printf("%ld, %ld\n", sumoffirstdiagonal, sumofsecondiagonal);
}
