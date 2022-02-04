#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main program
 *
 * Description: Display the value of random generated number.
 * if n>0, n=0 or n<0 displays their condition.
 * Return: If all goes on, it returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);

	return (0);
}
