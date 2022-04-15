#include "main.h"
/**
 * print_most_numbers - prints the numbers
 * Return: always 0 on success
 */
void print_most_numbers(void)
{
int i = 0;
while (i < 10)
{
while (i != 2 && i != 4)
{
_putchar (i + '0');
}
i++
}

_putchar ('\n');
}
