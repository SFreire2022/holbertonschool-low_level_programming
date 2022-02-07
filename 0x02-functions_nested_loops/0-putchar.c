#include "main.h"

/**
 * main - main program
 *
 * Description: Display "_putchar" not using standar libraries
 * Return: If all goes on, it returns 0
 */
int main(void)
{
	char string[] = "_putchar";
	int n, size;

	size = sizeof(string) - 1;
	for (n = 0; n < size; n++)
		_putchar(string[n]);

	_putchar('\n');

return (0);
}
