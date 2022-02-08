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
 * print_times_table - Prints times table for a given number
 * in range of 0 to 15.
 * @n: spects intger as an argument
 *
 * Return: Void
 */
void print_times_table(int n)
{
int factorA, factorB, res;
int cond;

if (n <= 15 && n >= 0)
{
cond = n + 1;

for (factorA = 0 ; factorA < cond; factorA++)
{
for (factorB = 0 ; factorB < cond; factorB++)
{
	res = factorA * factorB;
	if (factorB < cond && factorB > 0)
	{
		_putchar(',');
		_putchar(' ');
	if (res < 100)
		_putchar(' ');

	if (res < 10)
		_putchar(' ');

	}
	putchars(res);
}
_putchar('\n');
factorB = 0;
}
}
}
