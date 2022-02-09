#include "main.h"

/**
 * more_numbers - Print 10 times numbers til 14.
 *
 * Return: Always 0
 */
void more_numbers(void)
{
int n, a;

for (a = 0; a < 10; a++)
{
	for (n = 0; n <= 14; n++)
	{
		if (n > 9)
		{
			_putchar(n / 10 + '0');
		}
		_putchar(n % 10 + '0');
	}
	_putchar('\n');
}
}
