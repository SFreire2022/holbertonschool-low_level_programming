#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @n: singly linked list.
 * Return: number of elements in the list.
 */
size_t print_list(const list_t *n)
{
	size_t elements = 0;
	/* size_t in 64 bit arch would be a typedef for unsigned long long */
	/* size_t to handle big number of elements linked list*/
	/* const list_t *n To keep constant the pointer to first element */

	while (n != NULL)
	{
		if (n->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", n->len, n->str);
		n = n->next;
		elements++;
	}
	return (elements);
}
