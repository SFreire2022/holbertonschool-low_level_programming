#include <stdio.h>

/**
 * main - main program
 *
 * Description: Print all possible different combinations of two digits.
 * Separated by comma, followed by a space
 * except the last, followed by a new line.
 * 01 and 10 are considered the same combination of the two digits 0 and 1.
 * Return: If all goes on, it returns 0
 */
int main(void)
{
int i, e;
i = 48;
e = 48;

while (e < 58)
{
	i = 48;
	while (i < 58)
	{
		if (e != i && e < i)
		{
			putchar(e);
			putchar(i);
			if (i == 57 && e == 56)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	e++;
}
putchar('\n');

return (0);
}
