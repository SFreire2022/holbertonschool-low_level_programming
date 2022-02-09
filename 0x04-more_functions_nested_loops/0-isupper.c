#include "main.h"

/**
 * _isupper - return 1 if argument is alphabet uppercase
 * character, else return 0.
 *
 * @c: The character in ASCII
 *
 * Return: 1 for upperercase, otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
