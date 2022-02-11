#include "main.h"

/**
 * print_rev - Print each char of a pointer to
 * addres of given string but in reverse.
 *
 * @s: The pointer to addres of given string as a param.
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	for (i-- ; i >= 0; i--)
		_putchar(*(s + i));

	_putchar('\n');
}
