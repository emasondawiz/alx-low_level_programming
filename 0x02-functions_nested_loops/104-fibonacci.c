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
	int num;

	unsigned long int add, prev, n2, n1;


	n1 = 1;
	n2 = 2;
	add = n1 + n2;
	prev = n2;
	num = 0;
	while (num < 98)
	{
		if (num == 0)
		{
			printf("%ld, ", n1);
		}
		else if (num == 1)
		{
			printf("%ld, ", n2);
		}
		else
		{
			if (num == 97)
			{
				printf("%ld\n", (unsigned long) add);
			}
			else
			{
				printf("%ld, ", (unisgned long) add);
			}
			prev = n2;
			n2 = add;
			add = prev + n2;
		}
		num++;
	}
	return (0);
}
