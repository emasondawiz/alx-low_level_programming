#include "main.h"

/**
 * _print_rev_recursion - It print the reverse of a string
 * @s: Input value
 */

void _print_rev_recursion(char *s)
{
	mynum(s, strlen(s) - 1);
}

/**
 * mynum - it gets the integer
 * @s: Input value
 * @n: Input value
 */

void mynum(char *s, int n)
{
	if (n < 0)
	{
		return;
	}
	else
	{
		_putchar(s[n]);
		mynum(s, n - 1);
	}
}
