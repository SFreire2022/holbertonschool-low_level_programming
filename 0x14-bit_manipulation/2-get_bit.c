#include "main.h"

/**
  * get_bit - Gets the bit value at index pos from unsigned long int
  * @n: unsigned long int to evaluate
  * @index: index to start at
  * Return: value of the bit at the index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8 - 1)) /* Check if index is out of range */
		return (-1);
	else
		return ((n >> index) & 1);/* Shift bit number to index pos */
		/* performing & operation between 1 to get 1 or 0 */
}
