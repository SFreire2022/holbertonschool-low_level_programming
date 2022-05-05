#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a
 * dlistint_t list
 * @h: Head of the list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (i);

	while (h->prev != NULL)/* Ensure it is the first element */
		h = h->prev;

	while (h->next != NULL)/* Traverse to the last node */
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
