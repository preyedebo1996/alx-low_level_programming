#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * @str: pointer variable of type char
 * Return: always 0.
 */

void _puts(char *str)
{
	int u = 0; 
	char v[];

	while (str[u] != '\0')
	{
	v[u] = *str[u];
	u++;
	}

	_putchar (v + '\n');
}
