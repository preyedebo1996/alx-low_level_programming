#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n > len2)
	n = len2;
	s = malloc((len1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (0);

	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}

	for (; i < (len1 + n); i++)
	{
		s[i] = s2[i - len1];
	}
	s[i] = '\0';

return (p);
free(s);
}
