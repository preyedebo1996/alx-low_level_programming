#include "main.h"
/**
 * puts2 - prints every other character of a string, starting 
 * with the first character, followed by a new line
 * @str: pointer variable of type char
 *
 * Return: always 0, 1 on error.
 */
void puts2 (char *str)
{
	int i = 0;
	char s = *str;

	for (i = 0; s[i]; i++)
	{
	if ((i % 2) != 1)
	{
	_putchar (s[i]);
	}
	_putchar ('\n');
}
