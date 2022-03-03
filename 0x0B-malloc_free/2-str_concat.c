#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings using malloc
 * @s1: String 1
 * @s2: String 2
 * Return: Pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i = 0, j = 0, c = 0, d = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (; s1[i] != '\0'; i++)
		;
	for (; s2[j] != '\0'; j++)
		;

	a = malloc(sizeof(char) * (i + j + 1));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (; c < (i + j + 1); c++)
	{
		if (c < i)
			a[c] = s1[c];
		else
			a[c] = s2[d++];
	}
	return (a);
}
