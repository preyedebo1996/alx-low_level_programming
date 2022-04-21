#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * followed by a new line
 * @s: pointer variable with type char
 * Return: always 0 on success, 1 error.
 */

void print_rev(char *s)
{
	int len, startidx;
	int i = 0;

	while (s[i] != '\0')
	{
	i++;
	}
	len = i;

	for (startidx = (len - 1); startidx >= 0; startidx--)
	{
	_putchar (s[startidx]);
	}

	_putchar ('\n');
}
