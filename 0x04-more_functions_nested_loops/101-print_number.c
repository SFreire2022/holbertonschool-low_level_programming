#include "main.h"

/**
 * print_number - Print a given integer using _putchar.
 * @n: input integer.
 * Return: Void.
 */
void print_number(int n)
{
int d, count;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	d = n;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
		_putchar(((n / count) % 10) + '0');

}

