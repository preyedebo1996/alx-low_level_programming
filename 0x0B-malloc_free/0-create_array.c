#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array -creates an array of chars, and initializes
 *	it with a specific char.
 * @size: size of memory to be allocated.
 * @c: specific character to be initialized.
 * Return: NULL if size = 0, NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	int i; char *carr;

	if (size == 0)
		return NULL;

	carr = malloc(size * sizeof(char));

	if (carr == NULL)
		return NULL;

	for (i = 0; i < size; i++)
	{
		carr[i] = c;
	}
	return (carr);

/** free(carr);
 */
}
