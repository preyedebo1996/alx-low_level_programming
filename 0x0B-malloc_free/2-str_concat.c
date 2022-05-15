#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int count1 = 0, count2 = 0;
	unsigned int i, j, k;

	if (s1 == NULL)
	s1 = " ";
	if (s2 == NULL)
	s2 = " ";

	for (i = 0; s1[i]; i++)
	{
		count1++;
	}

	for (i = 0; s2[i]; i++)
	{
		count2++;
	}

	concat = malloc((count1 + count2 + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (j = 0; j < count1; j++)
	{
		concat[j] = s1[j];
	}
	j += 1;

	while (s2)
	{
		concat[j] = s2[k];
			j++;
			k++;
	}

	return (concat);
}
