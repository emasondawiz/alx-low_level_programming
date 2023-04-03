#include "main.h"

/**
 * *_memset - A function that replace
 * @s: Input value
 * @b: Input value
 * @n: Input value
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, sizeof(char) * n));
}
