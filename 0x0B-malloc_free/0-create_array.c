#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of chars, and initialize with specific char
 * @size: Size of array
 * @c: Specific char to initialize
 * Return: char pointer to created array memory address or NULL if error
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(c));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}