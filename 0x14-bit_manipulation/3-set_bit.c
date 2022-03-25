#include "main.h"

/**
  * set_bit - Sets bit at index to 1
  * @n: Pointer to number
  * @index: Index position
  * Return: 1 if ok, -1 if fail
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8 - 1)) /* Check if index is out of range */
		return (-1);
	/* perform an OR operation over n against 1 shifted index pos */
	/* overwriting vlue pointed by n (*n) */
	*n = *n | (1 << index);
	return (1);
}
