#include "3-calc.h"


/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always success
 */

int main(int argc, char *argv[])
{
	int calc, num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (get_op_func(operator) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' && num2 == 0) || (*operator == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	calc = get_op_func(operator)(num1, num2);

	printf("%d\n", calc);
	return (0);
}
