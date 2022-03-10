#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Adds positive numbers.
 * @argc: Number of command line arguments.
 * @argv: Array that contains the program command line arguments.
 * Return: 0 if ok, 1 if arguments != numbers
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}