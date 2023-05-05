#include "main.h"

/**
 * get_endianness - function checks if a machine is small or big
 * Return: always success
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *d = (char *) &j;

	return (*d);
}
