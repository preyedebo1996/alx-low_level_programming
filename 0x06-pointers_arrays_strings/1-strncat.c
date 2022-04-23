#include "main.h"
/**
* *_strncat - concatenates two strings with a limit of n for
* the source string
*@dest: pointer variable to destination string
*@src: pointer variable to source string
*@n: integer variable indicating number of characters
* Return: always 0 on success, 1 on error.
*/
char *_strcat(char *dest, char *src, int n)
{
int count = 0, ldest, i, j;

for (i = 0; i <= dest[i] && (dest[i] != '\0'); dest++)
{
ldest = i + 1;
}

for (j = 0; j < n; j++)
{
dest[ldest + 1] = src[j];
}

return (dest);
}
