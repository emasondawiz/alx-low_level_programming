#include "main.h"

/**
 * main - Entry Point
 * @argc: Input value
 * @argv: Input value
 * Return: Always Success
 */

int main(int argc, char *argv[])
{
	if (argc - 1 == 0)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		int arr[] = {25, 10, 5, 2, 1};

		int inputs = atoi(argv[1]);

		int size = sizeof(arr) / sizeof(arr[0]);

		int result = mycalculator(arr, size, 0, inputs, 0, 0);

		printf("%d\n", result);
	}
	return (0);
}

/**
 * mycalculator- Function that gets number of change
 * @arr: Input value
 * @length: Input value
 * @i: Input value
 * @rem: Input value
 * @num: Input value
 * @input: Input value
 * Return: Always Success
 */
int mycalculator(int arr[], int length, int i, int input, int rem, int num)
{
	if (i == length)
	{
		return (num);
	}
	else if (input == 0 && num != 0)
	{
		return (num);
	}
	else
	{
		if (input >= arr[i])
		{
			num = num + (input / arr[i]);
			rem = input % arr[i];
			input = rem;
			return (mycalculator(arr, length, i + 1, input, rem, num));
		}
		else
		{
			return (mycalculator(arr, length, i + 1, input, rem, num));
		}
	}
}
