#include "main.h"

/**
 * print_number - Print a given integer using _putchar.
 * @n: input integer.
 * Return: Void.
 */
void print_number(int n)
{
unsigned int d, count, a;

	if (n < 0)
	{
		_putchar('-');
		a = n * -1;
	}
	else
		a = n;

	d = a;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
		_putchar(((a / count) % 10) + '0');

}

