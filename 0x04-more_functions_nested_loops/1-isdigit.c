#include "main.h"

/**
 * _isdigit - return 1 if argument is digit, else return 0.
 *
 * @c: The character in ASCII
 *
 * Return: 1 for upperercase, otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
