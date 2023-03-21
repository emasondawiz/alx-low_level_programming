#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * print_alphabet: print all lower case alphabet
 */

int main(void)
{

	print_alphabet();
	_putchar('\n');
	return (0);



}

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
}
