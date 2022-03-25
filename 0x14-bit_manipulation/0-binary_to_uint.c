#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Char string type to store the bin
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int tot, pow;
	int len;

	if (b == NULL) /* Check if empty */
		return (0);

	for (len = 0; b[len]; len++) /* Count bin length */
	{
		if (b[len] != '0' && b[len] != '1') /* check if not binary as input*/
			return (0);
	}
	/* Start from LSB +1 position decreasing len to MSB */
	for (pow = 1, tot = 0, len--; len >= 0; len--, pow *= 2)
	{
		if (b[len] == '1') /* Sum position value only when have 1 */
			tot += pow; /* pow = 2 ^ position starting from pos 1 from R to L */
	}

	return (tot);
}
