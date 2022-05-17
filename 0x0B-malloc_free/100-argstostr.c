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
	int i, j;

	if (ac == 0 || av == NULL)
		return (NULL);

	arg = malloc(ac * sizeof(char **);
	for (i = 0; i < ac; i++)
	{
		arg += atoi(av[i]);
		_putchar(arg);
		_putchar(X'0A');
	}

	return (arg);
	free(arg);
}
