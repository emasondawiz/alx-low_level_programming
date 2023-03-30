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
	int i, arr;

	n = n - 1;

	while (i <= n)
	{
		arr = a[i];
		a[i] = a[n];
		a[n] = arr;
		i++;
		n--;
	}
}
