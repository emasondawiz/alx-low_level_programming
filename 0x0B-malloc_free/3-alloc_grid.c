#include "main.h"

/**
 * **alloc_grid - My matrix function
 * @width: Input value
 * @height: Input value
 * Return: Always Success
 */

int **alloc_grid(int width, int height)
{
	int **mymat;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	mymat = (int **) malloc(height * sizeof(int));

	if (mymat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		mymat[i] = (int *) malloc(width * sizeof(int));
		if (mymat[i] == NULL)
		{
			free(mymat);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			mymat[i][j] = 0;
		}
	}
	return (mymat);
}
