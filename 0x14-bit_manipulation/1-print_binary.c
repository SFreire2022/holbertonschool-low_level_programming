#include "main.h"

/**
  * print_binary - Converts a decimal number to binary
  * @n: Unsigned long int to convert
  * return: void
  */
void print_binary(unsigned long int n)
{
	int pos, flag;/* pos = number of positions, Flag to set start printing pos */

	if (n == 0)
		_putchar('0');
	/* Start decrement from higest pos (LSB) (n bits -1 count from pos 0)*/
	for (flag = 0, pos = sizeof(n) * 8 - 1; pos >= 0; pos--)
	{/* Shift to higest pos to eval MSB if == 1 performing & oper between 1 */
		/* to def start print pos (MSB) */
		if ((n >> pos) & 1)
		flag = 1;/* Flag to start printing */
		if (flag == 1)
		{
			if ((n >> pos) & 1)/* Eval new MSB (decr 1) if == 1 to print 1 */
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
