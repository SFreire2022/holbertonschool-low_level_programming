#include <stdio.h>

/**
 * main - main program
 *
 * Description: Display alphabet in lowercase,
 * except chars q and e followed by a new line.
 * Return: If all goes on, it returns 0
 */
int main(void)
{
char lchar;

for (lchar = 'a'; lchar <= 'z'; lchar++)
{
if (lchar != 'q' && lchar != 'e')
putchar(lchar);
}
putchar('\n');

return (0);

}
