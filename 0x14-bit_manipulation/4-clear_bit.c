#include "main.h"

/**
  * clear_bit - Sets bit at index to 0
  * @n: Pointer to number
  * @index: Index position
  * Return: 1 if ok, -1 if fail
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8 - 1)) /* Check if index is out of range */
		return (-1);
	/* First perform an NOT operation over 1 shifted index pos */
	/* Then perform an AND operation over n against NOT(1 shifted index pos) */
	/* overwriting vlue pointed by n (*n) */
	*n = *n & ~(1 << index);
	return (1);
}
