#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: min value.
 * @max: max value.
 *
 * Return: array of integers.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *Ly;
	int d;

	if (min > max)
		return (NULL);

	Ly = malloc(sizeof(*Ly) * ((max - min) + 1));

	if (Ly == NULL)
		return (NULL);

	for (d = 0; min <= max; d++, min++)
		Ly[d] = min;

	return (Ly);
}
