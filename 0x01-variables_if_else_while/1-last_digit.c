#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main program
 *
 * Description: Display random number and their last digit
 * checking the following conditions
 * lstdgt>5, lstdgt=0 or (lstdgt<5 and != 0)
 * Return: If all goes on, it returns 0
 */
int main(void)
{
	int n;
	int lstdgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstdgt = n % 10;
	if (lstdgt > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, lstdgt);
	else if (lstdgt == 0)
		printf("Last digit of %i is %i and is 0\n", n, lstdgt);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lstdgt);

	return (0);
}
