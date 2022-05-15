#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * 	,which contains a copy of a string given as parameter.
 * @str: the spring parameter to be duplicated.
 * Return: a pointer to a duplicate string of str,
 * 	NULL if insufficient memory, NULL IF str = NULL.
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *dupstr;

	if (str == NULL)
		return (NULL);

	dupstr = malloc(sizeof(str));

	for (i = 0; i < sizeof(str); i++)
	{
		dupstr[i] = str[i];
	}

	return (dupstr);

	free(dupstr);
}
