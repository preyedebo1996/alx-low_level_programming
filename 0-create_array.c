#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars and
 *	initializes with a specific char
 *@size: size of memory to allocated
 *@c: the character to be put in the array
 * Return 0 on success, NULL if size = 0 and NULL
 * 	if it fails to allocate memory.
 */

char *create_array(unsigned int size, char c)
{
	int i;

	if (size == 0)
		return NULL;

	char *carr[] = (int *)malloc(size * sizeof(char));

	if (carr == NULL)
	{
		return NULL;
	}

	for (i = 0; i < size; i++)
	{
		carr[i] = c;
	}
}
