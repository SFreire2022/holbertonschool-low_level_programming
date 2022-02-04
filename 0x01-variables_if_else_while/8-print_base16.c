#include <stdio.h>

/**
 * main - main program
 *
 * Description: Display all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: If all goes on, it returns 0
 */
int main(void)
{

char chars;
int myNum;

for (myNum = 0; myNum <= 9; myNum++)
putchar((myNum % 10) + '0');

for (chars = 'a'; chars <= 'f'; chars++)
putchar(chars);

putchar('\n');

return (0);

}
