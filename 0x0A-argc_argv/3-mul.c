#include <stdio.h>

/**
 * main - multiplies two numbers and prints the result
 * @argc: number of arguments
 * @argv: pointer to string of arguments
 * @a: first argument passed
 * @b: second argument passed
 * Return: 0 on success, and 1 on error.
 */

int main(int argc, char *argv[int a ,int b])
{
	int product;

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	product = (a * b);

	printf("%d\n", product);

	return (0);
}
