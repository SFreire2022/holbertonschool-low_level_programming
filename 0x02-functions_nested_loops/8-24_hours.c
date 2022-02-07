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
 * jack_bauer - Prints the minutes of a day
 *
 * Return: Void
 */
void jack_bauer(void)
{
int mins, hours;

for (hours = 0 ; hours < 24; hours++)
{
for (mins = 0 ; mins < 60; mins++)
{
	if (hours <= 9)
	{
		_putchar('0');
	}
	putchars(hours);
	_putchar(':');
	if (mins <= 9)
	{
		_putchar('0');
	}
	putchars(mins);
	_putchar('\n');
}
mins = 0;
}
}
