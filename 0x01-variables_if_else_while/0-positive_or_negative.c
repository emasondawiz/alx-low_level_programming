#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * tostring: Function that converts integer to string
 *
  * Return: Always 0 (Success)
 *
 */

void tostring(char [], int);

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);

	}

	else if (n < 0)
	{
		printf("%d is negative\n", n);

	}
	else
	{
		printf("%d is zero\n", n);

	}

	return (0);
}

void tostring(char str[], int num)
{
	int i, rem, len = 0, n;
	n = num;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	for (i = 0; i < len; i++)
	{
		rem = num % 10;
		num = num / 10;
		str[len - (i + 1)] = rem + '0';
	}

	str[len] = '\0';
}
