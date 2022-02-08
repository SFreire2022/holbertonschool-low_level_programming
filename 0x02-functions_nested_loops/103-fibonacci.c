#include <stdio.h>

/**
 * main - Print the sum of even Fibonacci numbers
 * up to a fib value
 * not exceeding 4000000.
 * Return: 0
 */
int main(void)
{
	int i = 1, j = 2, tot = 0;
	int a;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			tot += j;

		a = j;
		j += i;
		i = a;
	}
	printf("%d\n", tot);
	return (0);
}
