#include "main.h"
/**
 * *_strcat - concatenates two strings, overwriting
 * the terminating null byte (\0) at the end of dest
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 * Return: always 0 on success, 1 on error.
 */
char *_strcat(char *dest, char *src)
{
    int count = 0, lsrc, ldest, i, j;

    for (count = 0; count <= src[count] && (src[count] != '\0'); count++)
    {
    lsrc = count + 1;
    }

    for (i = 0; i <= dest[i] && (dest[i] != '\0'); dest++)
    {
    ldest = i + 1;
    }

    for (j = 0; j <= lsrc; j++)
    {
    dest[ldest + 1] = src[j];
    }

    return (dest);
}
