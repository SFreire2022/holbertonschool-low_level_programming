#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * of a given number.
 *
 * @n: input number as an int.
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int lastd;

	lastd = n % 10;
	if (lastd < 0)
	{
		_putchar(-lastd + '0');
		return (-lastd);
	}
	else
	{
		_putchar(lastd + '0');
		return (lastd);
	}
}
