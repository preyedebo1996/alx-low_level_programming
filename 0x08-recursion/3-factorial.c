#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: int type number to look for its factorial
 * Return: -1 if n is lower than 0.
 */

int factorial(int n)
{
	if (n < 0)
	return (-1);

	if (n == 0)
	return (1);

	else
	return (n * factorial(n - 1));
}
