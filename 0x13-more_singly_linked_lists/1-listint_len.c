#include "lists.h"
/**
 * listint_len - Traverse all nodes in a list to count them.
 * @h: Pointer to the first node of the list.
 * Return: Number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;
	/* size_t in 64 bit arch would be a typedef for unsigned long long */
	/* size_t to handle big number of nodes linked list*/

	elements = 0;
	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
