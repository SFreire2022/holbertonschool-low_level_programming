#include "main.h"
#include <stdlib.h>

/**
 * **strtow - Splits a string into words
 * @str: String to split
 *
 * Return: pointer to an array of strings or NULL if error
 */
char **strtow(char *str)
{
	char **array, *tmp;
	int i, k = 0, len = 0, ws, c = 0, start, end;

	while (*(str + len))
		len++;
	ws = count_words(str);
	if (ws == 0)
		return (NULL);

	array = (char **) malloc(sizeof(char *) * (ws + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				array[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	array[k] = NULL;

	return (array);
}

/**
 * count_words - Helper function to count the number of words in a string
 * @s: String to evaluate
 *
 * Return: number of words
 */
int count_words(char *s)
{
	int flag, c, ws;

	flag = 0;
	ws = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			ws++;
		}
	}

	return (ws);
}
