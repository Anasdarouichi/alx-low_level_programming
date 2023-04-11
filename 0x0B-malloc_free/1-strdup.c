#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @s: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *s)
{
	char *strout;
	unsigned int i, j;

	if (s == NULL)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
		;

	strout = (char *) malloc(sizeof(char) * (i + 1));

	if (strout == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strout[j] = s[j];

	return (strout);
}
