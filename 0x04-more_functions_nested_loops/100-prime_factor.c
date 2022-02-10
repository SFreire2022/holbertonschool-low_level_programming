#include <stdio.h>

/**
 * main - Print largest prime factor.
 * Return: Always 0.
 */
int main(void)
{
	long int n, primf;

	n = 612852475143;
	for (primf = 2; primf <= n; primf++)
	{
		if (n % primf == 0)
		{
			n = n / primf;
			primf--;
		}
	}
	printf("%ld\n", primf);
	return (0);
}
