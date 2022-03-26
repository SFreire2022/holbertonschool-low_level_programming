#include "main.h"

/**
  * get_endianness - returns processor endianness
  * Return: 0 if big endian, 1 if little endian
  */
int get_endianness(void)
{
	unsigned int i = 1; /* 4 bytes set as 1*/
	char *test; /* Pointer to one byete */

	test = (char *)&i; /* Point test to addres first byte of i */
	/* check if [00000000] 00000000 00000000 00000001 (BIG endian) */
	/* or [00000001] 00000000 00000000 00000000 (little endian) */
	if (test[0] == 1)
		return (1);
	else
		return (0);
}
