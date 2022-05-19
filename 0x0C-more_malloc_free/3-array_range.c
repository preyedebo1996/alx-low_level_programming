#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* array_range - creates an array of integers.
* @min: minimum number of elements
* @max: maximum number of elements
* Return: pointer to the newly created array.
*/
int *array_range(int min, int max)
{
	int *arr[];
	int i;

	if (min > max)
	return (NULL);

	arr = malloc(max * sizeof(*arr));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		arr[i];
	}

	return (arr);
	free(arr);
}
