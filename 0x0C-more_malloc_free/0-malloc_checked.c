#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - allocates memory using malloc.
* @b: size of memory to be allocated.
*/
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b * sizeof(*s));
	if (s == NULL)
	exit (98);

	return (s);
	free(s);
}
