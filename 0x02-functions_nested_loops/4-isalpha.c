#include "main.h"

/**
 * _isalpha - return 1 if argument is alphabet
 * character, else return 0.
 *
 * @c: The character in ASCII
 *
 * Return: 1 for alphabet (from A to z), otherwise 0.
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
