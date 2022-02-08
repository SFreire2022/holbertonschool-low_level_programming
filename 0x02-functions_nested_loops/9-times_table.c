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
 * times_table - Prints times table.
 *
 * Return: Void
 */
void times_table(void)
{
int factorA, factorB, res;

for (factorA = 0 ; factorA < 10; factorA++)
{
for (factorB = 0 ; factorB < 10; factorB++)
{
	res = factorA * factorB;
	if (factorB < 10 && factorB > 0)
	{
		_putchar(',');
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
