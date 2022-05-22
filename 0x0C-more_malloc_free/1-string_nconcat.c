#include "main.h"
#include <stdlib.h>
/**
* strlen - returns the length of a string.
* @str: string to find its length
* Return: length of string
*/
unsigned int slen(char *str)
{
	unsigned int len = 0;

	while(str[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
* string_nconcat - concatenates two strings.
* @s1: first string
* @s2: second string
* @n: number of bytes to be allocated from s2
* Return: pointer to concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2, len3;
	char *cat;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	len1 = slen(s1);
	len2 = slen(s2);

	if (n >= len2)
	n = len2;

	cat = malloc((len1 + n + 1) * sizeof(char));
	if (cat == NULL)
		return (0);

	for (i = 0; i < len1; i++)
	{
		cat[i] = s1[i];
	}

	for (; i < (len1 + n); i++)
	{
		p[i] = s2[i - size1];
	}

	cat[i] = '\0';

	return (cat);
	free(cat);
}
