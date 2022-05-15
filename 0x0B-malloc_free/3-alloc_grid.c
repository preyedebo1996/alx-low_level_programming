#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: number of columns
 * @height: number of rows
 * Return: pointer on success, NULL on error.
 */
int **alloc_grid(int width, int height)
{
	int *arr_2d, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr_2d = malloc((width * height) * sizeof(int));
	if (arr_2d == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
		_putchar("\n");
	}

	return (grid);
}
