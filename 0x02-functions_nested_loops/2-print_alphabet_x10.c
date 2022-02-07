#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet 10 times
 *
 * Description: Display alphabet in lowercase, followed by a new line.
 * Return: If all goes on, it returns 0
 */
void print_alphabet_x10(void)
{
int n;
char lchar;

for (n = 0; n < 10; n++)
{
	for (lchar = 'a'; lchar <= 'z'; lchar++)
		_putchar(lchar);

	_putchar('\n');
}
}
