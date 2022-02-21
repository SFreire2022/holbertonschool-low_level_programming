#include "main.h"

/**
 * _strchr - Locate character in a string
 * @s: Char array string
 * @c: Char to look for
 * Return: NULL if char not found, or pointer to first occurrence of char `c`
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
	}

	return (s + 1);
}
