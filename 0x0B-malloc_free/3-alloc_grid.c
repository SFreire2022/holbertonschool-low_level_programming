#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Create a 2d integer array using malloc.
 * Description: Each element of the array should be initialized to 0.
 * @width: Size width
 * @height: Size height
 * Return: Pointer to new array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int y, x;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	array = malloc(height * sizeof(*array));
	if (array == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		array[y] = malloc(width * sizeof(**array));
		if (array[y] == NULL)
		{
			for (y--; y >= 0; y--)
				free(array[y]);
			free(array);
			return (NULL);
		}
		for (x = 0; x < width; x++)
			array[y][x] = 0;
	}

	return (array);
}
