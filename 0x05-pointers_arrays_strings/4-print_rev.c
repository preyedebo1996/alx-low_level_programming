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
	int len = _strlen(s);
	int startidx = len - 1;

	for (startidx = (len - 1); startidx > 0; startidx--)
	{
	_putchar (s[startidx]);
	}

	_putchar ('\n');
}
