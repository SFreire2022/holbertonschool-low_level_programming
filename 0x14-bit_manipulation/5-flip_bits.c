#include "main.h"

/**
  * flip_bits - calculates the number of bits needed
  * to get from one number to another
  * @n: base number
  * @m: number to transform to
  * Return: the number of bit transformations needed
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int pos, res;

	res = 0;
	/* Start decrement from higest pos (LSB) (n bits -1 count from pos 0)*/
	for (pos = sizeof(n) * 8 - 1; pos >= 0; pos--)
		/* perform XOR op shiftingo from MSB to LSB then AND between 1 */
		/* if true have to change that bit */
		if (((n ^ m) >> pos) & 1)
			res++;
	return (res);
}
