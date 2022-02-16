#include "main.h"
/**
 * rot13 - Encodes a string into rot13.
 * @str: input string.
 * Return: str encoded.
 */

char *rot13(char *str)
{
	int c = 0, i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (str[c] != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (str[c] == alpha[i])
			{
				str[c] = rot13[i];
				break;
			}
		}
		c++;
	}

	return (str);
}
