#include <stdio.h>

/**
 * main - main program
 *
 * Description: Print all single digit numbers of base 10
 * starting from 0, separated by comma, followed by a space
 * except the last, followed by a new line.
 * Return: If all goes on, it returns 0
 */
int main(void)
{
int myNum;

for (myNum = 0; myNum <= 9; myNum++)
{
putchar((myNum % 10) + '0');
if (myNum != 9)
putchar(',');
putchar(' ');
}
putchar('\n');

return (0);

}
