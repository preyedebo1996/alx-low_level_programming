#include "main.h"
#include <stdlib.h>
/**
* strlen - returns the length of a string.
* @str: string to find its length
* Return: length of string
*/
unsigned int slen(char *str)
{
	usigned int len = 0, i = 0;

	while(str[i] != '\0')
	{
		len++;
		i++;
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

	for (i = 0; i < n; i++)
	{
		s1[len1 + 1 + i] = s2[i];
	}
	len3 = slen(s1);

	cat = malloc((len3) * sizeof(*cat));
	if (cat == NULL)
	{
		free(cat);
		return (NULL);
	}

	for (j = 0; j <= len3; j++)
	{	
		cat[j] = s1[j];			
	}
	cat[j + 1] = '\0';

	return (cat);
	free(cat);
}
