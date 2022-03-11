#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - Prints any variadic arguments.
 * @format: a list of types of arguments passed to the function.
 * Return: Void.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j, flag = 0;
	char *string;
	const char t_arg[] = "cifs";

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && flag)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int)), flag = 1;
			break;
		case 'i':
			printf("%d", va_arg(ap, int)), flag = 1;
			break;
		case 'f':
			printf("%f", va_arg(ap, double)), flag = 1;
			break;
		case 's':
			string = va_arg(ap, char *), flag = 1;
			if (!string)
			{
				printf("%p", string);
				break;
			}
			printf("%s", string);
			break;
		} i++;
	} putchar('\n'), va_end(ap);
}
