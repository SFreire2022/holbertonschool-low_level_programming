#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: String
 * @accept: String to match
 * Return: Pointer to the byte in `s` that matches one of the bytes in `accept`
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	char *p;

	for (; *s != '\0'; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				p = s;
				return (p);
			}
		}
	}
	return (0);
}
