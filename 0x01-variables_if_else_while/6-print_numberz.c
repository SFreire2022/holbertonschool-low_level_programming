#include <stdio.h>

/**
 * main - main program
 *
 * Description: Print all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Not allowed to use any variable of type char
 * Return: If all goes on, it returns 0
 */
int main(void)
{
int myNum;

for (myNum = 0; myNum <= 9; myNum++)
putchar((myNum % 10) + '0');

putchar('\n');

return (0);

}
