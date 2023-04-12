#include "main.h"

/**
 * free_grid - clears a 2D matrix
 * @grid: array pointer input
 * @height: input value
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		free(grid);
	}

	i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
