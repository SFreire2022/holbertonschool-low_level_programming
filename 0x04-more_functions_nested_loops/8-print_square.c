#include "main.h"

/**
 * print_square - Print square of hashes.
 * @size: size of the square.
 * Return: Void
 */
void print_square(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		if (a != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}

