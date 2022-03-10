#include "variadic_functions.h"

/**
  * sum_them_all - Variadic function Prints sum of variadic arguments
  * passed as arguments.
  * @count: Counter var to load number of arguments
  * Return: Sum of every numeric arguments, if no arguments passed return 0
  */
int sum_them_all(const unsigned int count, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	va_start(ap, count);/* Initialize the argument list.*/
	if (count == 0)
		return (0);

	sum = 0;
	for (i = 0; i < count; i++)
		sum += va_arg(ap, int);/* Get the next argument value.*/

	va_end(ap);/* Clean up.*/
	return (sum);
}
