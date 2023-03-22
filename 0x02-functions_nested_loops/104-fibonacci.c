#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (success)
 *
 */



int main(void)
{
	int num;

	int add, prev, n2, n1;


	n1 = 1;
	n2 = 2;
	add = n1 + n2;
	prev = n2;
	num = 0;
	while (num < 98)
	{
		if (num == 0)
		{
			printf("%d, ", n1);
		}
		else if (num == 1)
		{
			printf("%d, ", n2);
		}
		else
		{

			if (num == 97)
			{
				printf("%ld\n", labs(add));
			}
			else
			{
				printf("%ld, ", labs(add));
			}
			prev = n2;
			n2 = add;
			add = prev + n2;
		}
		num++;
	}
	return (0);
}
