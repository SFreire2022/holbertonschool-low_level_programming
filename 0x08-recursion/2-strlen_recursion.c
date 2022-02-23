#include "main.h"

/**
 * _strlen_recursion - Return length of a string using recursion
 * @s: String
 * Return: Length of Str
 */

int _strlen_recursion(char *s)
{
	int c;

	c = 0;
	if (*s == '\0')
		return (0);

	c = 1 +  _strlen_recursion(s + 1);

	return (c);
}
