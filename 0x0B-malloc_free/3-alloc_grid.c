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
	int **arr_2d;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr_2d = (int **)malloc((height) * sizeof(int **));
	if (arr_2d == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		/**
		 * reserving space for the contents of array
		 */
		arr_2d[i] = (int *)malloc(width * sizeof(int *));
		if (arr_2d[i] == NULL)
		{
			for (j = 0; j < i; j++)
			free(arr_2d[j]);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			arr_2d[i][j] = 0;
		}
	}

	return (arr_2d);
}
