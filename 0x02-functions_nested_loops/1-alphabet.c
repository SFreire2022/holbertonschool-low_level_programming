#include "main.h"

/**
 * print_alphabet - Print alphabet
 *
 * Description: Display alphabet in lowercase, followed by a new line.
 * Return: If all goes on, it returns 0
 */
void print_alphabet(void)
{
char lchar;

for (lchar = 'a'; lchar <= 'z'; lchar++)
_putchar(lchar);

_putchar('\n');
}
