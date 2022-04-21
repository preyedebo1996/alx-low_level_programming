#include "main.h"
/**
* rev_string - reverses a string
*@s: pointer variable of type char
* Return: 0 on success, 1 on error.
*/
void rev_string(char *s)
{
	int len, startidx, i = 0;

	while (s[i] != '\0')
	{
	i++;
	}
	len = i;

	for (startidx = (len - 1); startidx >= 0; startidx--)
	{
	_putchar (s[startidx]);
	}
}
