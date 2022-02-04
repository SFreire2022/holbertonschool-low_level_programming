#include <stdio.h>

/**
 * main - main program
 *
 * Description: Display alphabet in lowercase, followed by a new line.
 * Return: If all goes on, it returns 0
 */
int main(void)
{
char lchar;

for (lchar = 'a'; lchar <= 'z'; lchar++)
putchar(lchar);

putchar('\n');

return (0);

}
