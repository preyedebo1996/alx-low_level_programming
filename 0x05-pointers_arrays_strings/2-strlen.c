#include "main.h"
/**
* _strlen - returns the length of a string
*@s: pointer variable of type char
*
* Return: always 0.
*/

int _strlen(char *s)
{
	int i = 0;

	while(i != \0)
	{
	_putchar(s[i]);
	i++;
	}
	
	return i + 1;
}
