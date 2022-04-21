#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * followed by a new line
 * _strlen - prints length of a string
 * @s: pointer variable with type char
 * Return: always 0.
 */
int _strlen(char *s);

void print_rev(char *s)
{
	int u = 0, v, len;
	int endidx, startidx;

	len = _strlen(s);
	endidx = len -1;

	for (u = len - 1; u >= 0; u--)
	{
	
	if (s[u] == ' ' || u == 0)
	{
	if (u == 0)
	{
	startidx = 0;
	}
	else
	{
	startidx = u + 1;
	}

	for (v = startidx; v <= endidx; v++)
	{
	_putchar (s[v]);
	}
	endidx = u - 1;
	_putchar (" ");
	}

	}

	_putchar ('\n');
}
