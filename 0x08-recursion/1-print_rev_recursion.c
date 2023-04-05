#include "main.h"

/**
 * _print_rev_recursion - It print the reverse of a string
 *
 * @s: Input value
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
		s++;
	}
}
