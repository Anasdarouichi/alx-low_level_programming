#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory.
 * @b: number of bytes.
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *l;

	l = malloc(b);
	if (l == 0)
		exit(98);
	return (l);
}
