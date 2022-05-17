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
	int **arr_2d[height][width], i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr_2d = malloc((height) * sizeof(*arr_2d));
	if (arr_2d == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr_2d[i] = malloc(width * sizeof(**arr_2d));
		if(arr_2d[i] == NULL)
		{
			free(arr_2d[i]);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			arr_2d[i][j] = 0;
		}
		_putchar("\n");
	}

	return (arr_2d);
}
