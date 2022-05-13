#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers and prints the result
 * @argc: number of arguments
 * @argv: pointer to string of arguments
 * Return: 0 on success, and 1 on error.
 */

int main(int argc, char *argv[])
{
	int product, a, b;

	if (argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	a = argv[1];
	b = argv[2];
	product = (a * b);

	printf("%d\n", product);

	return (0);
}
