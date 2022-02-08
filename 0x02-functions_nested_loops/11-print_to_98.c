#include "main.h"

/**
 * putchars - print recursively all cahrs from an int number.
 * @n: spects intger as an argument
 *
 * Return: Void
 */
void putchars(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		putchars(n / 10);
	}

	_putchar(n % 10 + '0');
}

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: spects intger as an argument
 *
 * Return: Void
 */
void print_to_98(int n)
{
if (n <= 98)
{
	for (n = n; n <= 98; n++)
	{
		putchars(n);
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
else if (n == 98)
	putchars(n);

else
{
	for (n = n; n >= 98; n--)
	{
		putchars(n);
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
_putchar('\n');
}

