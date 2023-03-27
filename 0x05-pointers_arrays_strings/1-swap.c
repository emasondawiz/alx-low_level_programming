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
	*a = *a + *b - *a;

	*b = *a + *b - *a;
}
