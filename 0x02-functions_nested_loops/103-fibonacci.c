#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (success)
 *
 */



int main(void)
{
	long n1, num, add, prev, n2, data, sumofeven, limit;

	n1 = 1;
	data = 40;
	sumofeven = 0;
	n2 = 2;
	add = n1 + n2;
	prev = n2;
	num = 0;
	limit = 4000000;
	while (num < data)
	{
		if (num == 0)
		{
			if (n1 % 2 == 0)
				sumofeven += n1;

		}
		else if (num == 1)
		{
			if (n2 % 2 == 0)
				sumofeven += n2;
		}
		else
		{
			if (add <= limit)
				if (add % 2 == 0)
					sumofeven += add;
				else
				{
					break;
				}
			prev = n2;
			n2 = add;
			add = prev + n2;
		}
		num++;
	}
	printf("%d\n", sumofeven);
	return (0);
}
