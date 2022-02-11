#include "main.h"

/**
 * _strlen - Calculate and return the length
 * of a given string.
 *
 * @s: The pointer to addres of given string as a param.
 *
 * Return: Length of parsed string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	return (i);
}
