#include "main.h"
#include <stdio.h>

/*
 * main - prints its name followed by a new line
 *
 * Return: 0 on success.
 */

void main(char *argv)
{
	int i = 0;
	if (argv[i])
	printf("%s\n", argv[i]);
}
