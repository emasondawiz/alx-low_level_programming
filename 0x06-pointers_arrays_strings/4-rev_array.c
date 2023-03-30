#include "main.h"

/**
 * reverse_array - It display the content of an array in revers
 *
 * @a: Input variable
 * @n: Input variable
 *
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		if (i == 0)
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}
