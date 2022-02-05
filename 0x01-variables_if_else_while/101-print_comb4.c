#include <stdio.h>

/**
 * main - main program
 *
 * Description: Print all possible different combinations of three digits.
 * Separated by comma, followed by a space, except the last,
 * followed by a new line.
 * 012, 120, 102, 021, 201, 210 are considered
 * the same combination of the three digits 0, 1 and 2.
 * Return: If all goes on, it returns 0
 */
int main(void)
{
int i, e, g;

i = 48;
e = 48;
g = 48;

while (e < 58)
{
	i = 48;
	while (i < 58)
	{
		g = 48;
		while (g < 58)
		{
			if (e != i && e != g && i != g && e < i && i < g)
			{
				putchar(e);
				putchar(i);
				putchar(g);
				if (i == 56 && e == 55 && g == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			g++;
		}
		i++;
	}
	e++;
}
putchar('\n');
return (0);
}
