#include "search_algos.h"

/**
* recursive_binary_search - Function that searches for a value in a sorted
* array of integers using the Binary search algorithm
* @array: pointer to the first element of the array to seach in
* @pos: position to start
* @size: number of elements in array
* @value: value to search for
* Return: The first index where value is located, otherwise -1
*/

int recursive_binary_search(int *array, size_t pos, size_t size, int value)
{
	size_t middle, i;
	char *space;

	if (pos >= size)
		return (-1);

	middle = pos + (size - pos - 1) / 2;
	printf("Searching in array:");
	space = " ";
	for (i = pos; i < size; i++)
	{
		printf("%s%d", space, array[i]);
		space = ", ";
	}
	printf("\n");

	if (array[middle] == value)
		return (middle);
	if (array[middle] > value)
		return (recursive_binary_search(array, pos, middle, value));
	return (recursive_binary_search(array, middle + 1, size, value));
}

/**
* binary_search - Function that seaches for a value in an array of integers
* using Binary search
* @array: pointer to the first element of the array to seach in
* @size: number of elements in array
* @value: value to search for
* Return: The first index where value is located, otherwise -1
*/

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (recursive_binary_search(array, 0, size, value));
}
