#include "function_pointers.h"
/**
  * print_name - Prints a name
  * @name: Input name
  * @f: Pointer to function as an argument
  * Return: no return
  */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
