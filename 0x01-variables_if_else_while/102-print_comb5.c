#include <stdio.h>

/**
 * main - main program
 *
 * Description: Print all possible different combinations of
 * two two-digit numbers.
 * Separated by comma, followed by a space, except the last,
 * followed by a new line.
 * 00 01 and 01 00 are consideredthe same combination of
 * the three digits 0, 1 and 2.
 * Return: If all goes on, it returns 0
 */
int main(void)
{
int a, b, c, d, mod1, mod2;

a = b = c = d = 48;
while (d < 58)
{
	c = 48;
	while (c < 58)
	{
		b = 48;
		while (b < 58)
		{
			a = 48;
			while (a < 58)
			{
				mod1 = (d * 10) + c;
				mod2 = (b * 10) + a;
				if (mod1 < mod2)
				{
					putchar(d);
					putchar(c);
					putchar(' ');
					putchar(b);
					putchar(a);
					if (d == 57 && c == 56 && b == 57 && a == 57)
					{
					break;
					}
					putchar(',');
					putchar(' ');
				}
				a++;
			}
			b++;
		}
		c++;
	}
	d++;
}
putchar('\n');
return (0);
}
