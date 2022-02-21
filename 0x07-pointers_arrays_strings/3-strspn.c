#include "main.h"

/**
 * _strspn - Search a string for a set of bytes
 * @s: Char string array
 * @accept: Char array to check bytes with
 * Return: Number of bytes in the intial segment of `s`
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, d, b = 0, c = 0;

	while (accept[c] != '\0')
		c++;
	for (d = 0; s[d] != '\0'; d++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[d] == accept[i])
			{
				b++;
				break;
			}
			if (i == c - 1)
				return (b);
		}
	}
	return (b);
}
