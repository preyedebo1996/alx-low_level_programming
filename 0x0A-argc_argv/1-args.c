#include <stdio.h>

/**
* main - prints the number of arguments passed to it
*@argc: number of arguments
*@argv: poinnter to string of arguments
* Return: 0 on success.
*/
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
