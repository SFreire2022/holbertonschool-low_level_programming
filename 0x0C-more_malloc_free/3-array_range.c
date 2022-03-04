#include "main.h"
#include <stdlib.h>

/**
 * array_range - Create an array of integers initialized from min to max.
 * @min: Min value to include.
 * @max: Max value to include.
 * Return: Pointer to newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */

int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		p[i] = min;

	return (p);
}
