#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>


/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 *
 *
 */



int main(void)
{
	int n, lastdigit, result;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = (n % 10);

	if (lastdigit < 0)
	{
		result = 0 - (lastdigit);
	}
	else
	{
		result = lastdigit;
	}

	if (result > 0)
	{
		printf("%d is positive\n", n);

	}

	else if (result < 0)
	{
		printf("%d is negative\n", n);

	}
	else
	{
		printf("%d is zero\n", n);

	}

	return (0);
}

