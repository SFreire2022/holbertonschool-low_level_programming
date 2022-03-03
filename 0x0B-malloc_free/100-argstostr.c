#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: Argument count.
 * @av: Argument vector.
 *
 * Return: Pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *alist;
	int c, i, j, ia;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	alist = malloc((c + 1) * sizeof(char));

	if (alist == NULL)
	{
		free(alist);
		return (NULL);
	}

	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			alist[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			alist[ia] = av[i][j];
	}
	alist[ia] = '\0';

	return (alist);
}
