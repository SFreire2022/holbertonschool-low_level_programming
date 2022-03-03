#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string using malloc
 * @str: String to duplicate
 * Return: Pointer to a the new duplicated string
 */

char *_strdup(char *str)
{
	char *a;
	int i = 0, c;

	if (str == NULL)
		return (NULL);

	for (; str[i] != '\0'; i++)
		;

	a = malloc(i * sizeof(char) + 1);
	if (a == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		a[c] = str[c];
	a[c] = '\0';

	return (a);
}
