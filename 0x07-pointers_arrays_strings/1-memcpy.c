#include "main.h"

/**
 * _memcpy - Copy memory area
 * @dest: Char array to copy into
 * @src: Char array to copy from
 * @n: Number of elements to copy
 * Return: pointer to `dest`
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *buff;

	buff = dest;
	for (; n > 0; dest++, src++, n--)
		*dest = *src;

	return (buff);
}
