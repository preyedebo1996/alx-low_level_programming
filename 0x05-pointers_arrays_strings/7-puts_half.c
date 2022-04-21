#include "main.h"
/**
 * puts_half - prints half of a string followed by a new line
 * if the number of characters is odd, it prints the last n characters
 * @str: pointer variable of type char
 *
 * Return: always 0 on success, 1 on error.
 */
void puts_half(char *str)
{
	int i, j, lidx, n;

	i = 0;

	for (i = 0; str[i]; i++)
	{
	lidx = i;
	}
	n = (lidx - 1) / 2;

	if ((lidx % 2) != 0)
	{
	for (j = (n + 1); str[j]; j++)
	{
	_putchar (str[j]);
	}
	}

	_putchar ('\n');
}
