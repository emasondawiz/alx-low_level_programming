#include "main.h"

/**
 * swap_int - Function that swaps
 *
 * @a: Input variable
 *
 * @b: Input variable
 *
 */

void swap_int(int *a, int *b)
{
	int total = *a + *b;

	*a = total - *a;

	*b = total - *a;
}
