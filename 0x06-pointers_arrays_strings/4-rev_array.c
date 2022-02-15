#include "main.h"

/**
 * reverse_array - Function that reverse an array of int.
 *
 * @a: Pointer to int array
 * @n: Number of elements of the array
 *
 * Return: Void.
 */
void reverse_array(int *a, int n)
{
	int d, e, x;

	d = e = x = 0;
	if (n % 2 == 0)
	{
		d = n / 2;
		for (n-- ; n >= d; n--)
		{
			x = a[n];
			a[n] = a[e];
			a[e] = x;
			e++;
		}
	}
	else
	{
		d = n / 2;
		d++;
		for (n-- ; n >= d; n--)
		{
			x = a[n];
			a[n] = a[e];
			a[e] = x;
			e++;
		}
	}
}
