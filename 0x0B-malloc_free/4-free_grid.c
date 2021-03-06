#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional array of integers.
 * @grid: 2 dimensional array of integers to be freed.
 * @height: The height of grid.
 */
void free_grid(int **grid, int height)
{
	int index;

	if (grid == NULL || height <= 0)
	return;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
