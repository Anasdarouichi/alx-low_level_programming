#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: pointer to the first string.
 * @s2: pointer to the second string.
 * @n: number of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *liloo;
	unsigned int ls1, ls2, lliloo, d;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lliloo = ls1 + n;

	liloo = malloc(lliloo + 1);

	if (liloo == NULL)
		return (NULL);

	for (d = 0; d < lliloo; d++)
		if (d < ls1)
			liloo[d] = s1[d];
		else
			liloo[d] = s2[d - ls1];

	liloo[d] = '\0';

	return (liloo);
}
