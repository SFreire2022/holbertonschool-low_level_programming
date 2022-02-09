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
 * more_numbers - Print 10 times numbers til 14.
 *
 * Return: Always 0
 */
void more_numbers(void)
{
int n;
int a;

for (a = 0; a < 10; a++)
{
	for (n = 0; n <= 14; n++)
		putchars(n);

	_putchar('\n');
}
}
