#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * followed by a new line
 * @s: pointer variable with type char
 * Return: always 0.
 */

void print_rev(char *s)
{
	int u = 0;
	char *v;

	v = s;

	for (u = '\n'; u >= 0; u--)
	{
	_putchar (v[u]);
	}

	_putchar ('\n');
}
