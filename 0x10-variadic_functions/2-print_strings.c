#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_strings - Variadic function that prints a list of strings.
  * @separator: String to be printed between strings.
  * @n: Nnumber of strings passed to the function.
  * Return: Void.
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;/* Macro function to declare array list.*/
	unsigned int i;
	char *string;

	va_start(ap, n);/* Initialize the argument list.*/
	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char *);/*Set the next argument value and*/
/*define type to pointer to char for string arguments.*/
		if (string)/* If !null, print the string*/
			printf("%s", string);
		else
			printf("%p", string);/*Else, print (nil) null pointer*/
		if (separator && i < n - 1)/*If !null, print the separator*/
			printf("%s", separator);/*exept for the last (-1).*/
	}
	va_end(ap);/* Clean up.*/
	putchar('\n');
}
