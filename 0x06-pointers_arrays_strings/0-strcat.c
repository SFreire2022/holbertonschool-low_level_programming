#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: The pointer to addres of given dest
 * char string as a param.
 * @src: The pointer to addres of given src
 * char string as a param.
 *
 * Return: Concatenated strings.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len, i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}
