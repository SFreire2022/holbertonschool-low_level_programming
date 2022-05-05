#include "lists.h"

/**
 * dlistint_len - Returns the number of nodes in
 * a double linked list
 * @h: Head of the list
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h->prev != NULL)/* Ensure it is the first element */
		h = h->prev;

	while (h != NULL)/* Traverse to the last node */
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
