#include "main.h"

/**
 * print_triangle - Print triangle of hashes.
 * @size: size of the triangle.
 * Return: Void
 */
void print_triangle(int size)
{
	int a, b, c, d;

	for (a = 0; a < size; a++)
	{
		c = size - 1 - a;
		d = size - c;
		for (b = 0; b < c; b++)
			_putchar(' ');

		for (b = 0; b < d; b++)
			_putchar('#');

		if (a != size - 1)
			_putchar('\n');

	}
	_putchar('\n');
}
