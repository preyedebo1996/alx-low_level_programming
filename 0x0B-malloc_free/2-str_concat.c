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
	unsigned int count1, count2, i, j, k; 

	count1 = count2 = 0;

	if (s1 == NULL)
	s1 = " ";
	if (s2 == NULL)
	s2 = " ";

	for (count1 = 0; s1[count1] != "\0"; count1++)
	{
		count1++;
	}

	for (count2 = 0; s2[count2]; count2++)
	{
		count2++;
	}
	count2 += 1;

	concat = malloc((count1 + count2) * sizeof(char));

	if (concat == NULL)
		return (NULL);
	
	for (j = 0; j < count1; j++)
	{
		concat[j] = s1[j];
	}

	for (k = 0; k <= count2; k++)
	{
		concat[j] = s2[k];
			j++;
	}
	return (concat);
}
