#include "3-calc.h"

/**
 * main - check the code
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: if all goes on 0 otherwise
 * if the number of arguments is wrong, print Error\n and exit 98.
 * if the operator is none of the above, print Error\n and exit 99.
 * if the user tries to divide (/ or %) by 0, print Error\n and exit 100.
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", operation(a, b));
	return (0);
}
