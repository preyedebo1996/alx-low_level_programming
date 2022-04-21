#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers followed
 * by a new line.
 * @a: pointer variable of type int
 * @n: variable representing number of elements to print
 *
 * Return: always 0 n success, 1 on error.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
	if (i != (n - 1))
	{
	printf("%d, ", a[i]);
	}
	else
	{
	printf("%d", a[i]);
	}
	}

	printf("\n");
}
