#include "main.h"
/**
 * _strcpy - copies the string pointed to by src,
 * includng the terminating null byte.
 * @dest: destination pointer variable
 * @src: source pointer variable
 * Return: always 0 n success, 1 on error.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	char *g = dest;

	for (i = 0; i <= src[i]; i++)
	{

	dest[i] = src[i];
	}
	dest[i] = 0;


	return (g);
}
