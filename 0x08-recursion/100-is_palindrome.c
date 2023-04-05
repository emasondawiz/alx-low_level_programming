#include "main.h"

/**
 * is_palindrome - function that test for palindrome
 * @s: Input value
 * Return: Always success
 */

int is_palindrome(char *s)
{
	return (mychecker(s, strlen(s) - 1, 0));
}

/**
 * mychecker - check for equality
 * @s: Input value
 * @end: Input value
 * @start: Input value
 * Return: Always success
 */

int mychecker(char *s, int end, int start)
{
	if (s[end] != s[start])
	{
		return (0);
	}
	else if (end == 0 && s[end] == s[start])
	{
		return (1);
	}
	else
	{
		return (mychecker(s, end - 1, start + 1));
	}
}
