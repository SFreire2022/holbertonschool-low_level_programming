#include "main.h"

/**
 * _strstr - Finds the first occurrence of the substring
 * `needle` in the string `haystack`.
 * @haystack: Char string array where find.
 * @needle: Char array to find.
 * Return:  Pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *phaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		phaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (phaystack);
		haystack = phaystack + 1;
	}
	return (0);
}
