#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _calloc - allocates memory for an array, using malloc.
* @nmemb: number of elements
* @size: size of each element
* Return: pointer to concatenated string
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ary[];
	unsigned int i;

	if (nmemb == 0 || size == 0)
	return (NULL);


	ary = malloc(nmemb * sizeof(size))
	if (ary == NULL)
	{
		free(ary);
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		ary[i] = 0;
	}

	return (ary);
	free(ary);
}
