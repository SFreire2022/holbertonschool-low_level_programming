#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_numbers - Variadic function Prints a list known numbers.
  * @separator: String to be printed between numbers.
  * @n: Nnumber of integers passed to the function.
  * Return: Void.
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;/* Macro function to declare array list.*/
	unsigned int i;

	va_start(ap, n);/* Initialize the argument list.*/
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));/* Print the next argument value.*/
		if (separator && i < n - 1)/* If exist, print the separator*/
			printf("%s", separator);/*exept for the last (-1).*/
	}
	va_end(ap);/* Clean up.*/
	putchar('\n');
}
