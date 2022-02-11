#include "main.h"

/**
 * swap_int - Exchange the external variable using
 * Dereferencing.
 *
 * @a: The pointer to addres of first given
 * var as a param to swap.
 * @b: The pointer to addres of
 * second given var as a param to swap.
 *
 * Return: Void.
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
