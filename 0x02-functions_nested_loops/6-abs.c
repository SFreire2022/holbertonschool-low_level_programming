#include "main.h"

/**
 * _abs - Show the absolute value
 * of an integer.
 *
 * @n: input number as an int.
 *
 * Return: abs value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
