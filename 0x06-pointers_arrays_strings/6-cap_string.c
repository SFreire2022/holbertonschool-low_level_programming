#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *str)
{
	int c = 0, i;
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (str[c] >= 97 && str[c] <= 122)
		str[c] = str[c] - 32;
	c++;
	while (str[c] != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (str[c] == sep[i])
			{
				if (((str[c + 1]) >= 97) && ((str[c + 1]) <= 122))
					str[c + 1] = str[c + 1] - 32;
				break;
			}
		}
		c++;
	}
	return (str);
}
