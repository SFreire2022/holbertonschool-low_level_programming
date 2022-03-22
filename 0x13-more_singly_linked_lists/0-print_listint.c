#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the first element of the list.
 * Return: Number of elements in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;
	/* size_t in 64 bit arch would be a typedef for unsigned long long */
	/* size_t to handle big number of elements linked list*/

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elements++;
	}
	return (elements);
}
