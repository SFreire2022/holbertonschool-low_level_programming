#include <stdio.h>

/**
 * main - main program
 *
 * Description: Display alphabet in lowercase, followed by a new line.
 * But in reverse
 * Return: If all goes on, it returns 0
 */
int main(void)
{
char lchar;

for (lchar = 'z'; lchar >= 'a'; lchar--)
putchar(lchar);

putchar('\n');

return (0);

}
