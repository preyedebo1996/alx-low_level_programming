#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to a string
 * Return: 0 on success, 1 on error.
 */

void _puts_recursion(char *s)
{
	if (s == '\0')
	return;
	else
	{
		_putchar (s + _puts_recursion(s + 1));
		_putchar ('\n');
	}
}
