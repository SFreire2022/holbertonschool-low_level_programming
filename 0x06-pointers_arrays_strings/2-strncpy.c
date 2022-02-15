#include "main.h"

/**
 * _strncpy - function that copies a string.
 * Description: It will use at most n bytes from src;
 * and src does not need to be null-terminated if it
 * contains n or more bytes.
 *
 * @dest: The pointer to addres of given dest
 * char string as a param.
 * @src: The pointer to addres of given src
 * char string as a param.
 * @n: n bytes from src in casenot null at the end
 * of the string
 *
 * Return: Concatenated strings.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
