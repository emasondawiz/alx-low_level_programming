#include "main.h"

/**
 * *_memcpy - A function that replace
 * @dest: Input value
 * @src: Input value
 * @n: Input value
 * Return: Always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memset(dest, src, sizeof(char) * n));
}
