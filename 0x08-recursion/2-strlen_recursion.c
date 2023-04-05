#include "main.h"

/**
 * _strlen_recursion - counts the number of string
 *
 * @s: Input value
 *
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		len++;
		return (len + _strlen_recursion(s + 1));
	}
}
