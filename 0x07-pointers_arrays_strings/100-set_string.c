#include "main.h"

/**
 * set_string - Set the value of a pointer to a char
 * @s: Source adress.
 * @to: Target adress.
 * Return: no return.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
