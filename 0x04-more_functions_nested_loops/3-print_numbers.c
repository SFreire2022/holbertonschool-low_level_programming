#include "main.h"

/**
 * print_numbers - Print all digits.
 *
 * Return: Always 0
 */
void print_numbers(void)
{
for (n = 0; n <= 9; n++)
	_putchar(n % 10 + '0');

_putchar('\n');
}
