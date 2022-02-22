#include "main.h"

/**
 * print_chessboard - Print the chessboard, 2D array
 * @a: 2d array of chars
 */

void print_chessboard(char (*a)[8])
{
	int y, x;

	for (y = 0; y < 8; y++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(a[y][x]);
		}
		_putchar('\n');
	}
}
