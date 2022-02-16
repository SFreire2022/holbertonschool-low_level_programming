#include "main.h"

/**
 * infinite_add - function that adds two numbers.
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size
 * Return: the pointer to dest of res.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int cont1 = 0, cont2 = 0, op, bg, dr1, dr2, add = 0;

	while (n1[cont1] != '\0')
		cont1++;
	while (n2[cont2] != '\0')
		cont2++;
	if (cont1 >= cont2)
		bg = cont1;
	else
		bg = cont2;
	if (size_r <= bg + 1)
		return (0);
	r[bg + 1] = '\0';
	cont1--, cont2--, size_r--;
	dr1 = (n1[cont1] - '0'), dr2 = (n2[cont2] - '0');
	while (bg >= 0)
	{
		op = dr1 + dr2 + add;
		if (op >= 10)
			add = op / 10;
		else
			add = 0;
		if (op > 0)
		r[bg] = ((op % 10) + '0');
		else
			r[bg] = '0';
		if (cont1 > 0)
			cont1--, dr1 = (n1[cont1] - '0');
		else
			dr1 = 0;
		if (cont2 > 0)
			cont2--, dr2 = (n2[cont2] - '0');
		else
			dr2 = 0;
		bg--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
