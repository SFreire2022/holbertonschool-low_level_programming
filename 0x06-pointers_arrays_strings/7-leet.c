#include "main.h"
/**
 * leet - Encodes a string into 1337.
 * @str: input string.
 * Return: str encoded.
 */

char *leet(char *str)
{
	int c = 0, i;
	int lw_lett[] = {97, 101, 111, 116, 108};
	int up_lett[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (str[c] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (str[c] == lw_lett[i] || str[c] == up_lett[i])
			{
				str[c] = num[i];
				break;
			}
		}
		c++;
	}

	return (str);
}
