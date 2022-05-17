#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of my program
 * @ac: argument count
 * @av: pointer for argument values
 * Return: pointer to a new string or NULL on error
 */
char *argstostr(int ac, char **av)
{
	char *arg;
	int i, j, index = 0;
	int size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i =0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
	}

	arg = malloc(ac * sizeof(char **);
	if (arg == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		arg[index++] = av[i][j];

		arg[index++] = '\n';
	}

	arg[size] = '\0';

	return (arg);
	free(arg);
}
