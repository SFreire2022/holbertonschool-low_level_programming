#include "main.h"

/**
 * _sqrt_recursion - Return the natural square root of a number
 * @n: int given number
 * Return: If no natural square root, return -1. Else return natural
 * square root
 */

int _sqrt_recursion(int n)
{
	return (counter(n, 1));
}

/**
 * counter - Counter function to solve _sqrt_recursion
 * @num: Number to determine if square root
 * @i: Incrementer to compare against num
 * Return: Square root if natural square root, or -1 if none found
 */

int counter(int num, int i)
{
	int square;

	square = i * i;
	if (square == num)
		return (i);
	else if (square < num)
		return (counter(num, i + 1));
	else
		return (-1);
}
