#include "main.h"

/**
 * _isdigit - checks for a digit
 *@c: print int
 * Return: always 0 on success
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
