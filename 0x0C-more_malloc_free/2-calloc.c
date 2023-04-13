#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of the elements.
 * @size: size of the bytes.
 *
 * Return: pointer to the allocated memory.
 * if number or size is 0, returns NULL.
 * if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *L;
	unsigned int d;

	if (nmemb == 0 || size == 0)
		return (NULL);

	L = malloc(nmemb * size);

	if (L == NULL)
		return (NULL);

	for (d = 0; d < (nmemb * size); d++)
		L[d] = 0;

	return (L);
}
