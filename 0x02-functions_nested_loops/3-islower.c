#include "main.h"

/**
 * _islower - return 1 if argument is alphabet lowercase
 * character, else return 0.
 *
 * @c: The character in ASCII
 *
 * Return: 1 for lowercase, otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
