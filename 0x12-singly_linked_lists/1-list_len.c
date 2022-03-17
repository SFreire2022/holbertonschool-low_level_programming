#include "lists.h"
/**
 * list_len - Traverse all elements in a list to count them.
 * @n: Pointer to the first element of the list.
 * Return: Number of elements in the list.
 */
size_t list_len(const list_t *n)
{
	size_t elements = 0;
	/* size_t in 64 bit arch would be a typedef for unsigned long long */
	/* size_t to handle big number of elements linked list*/
	/* const list_t *n To keep constant the pointer to first element */

	elements = 0;
	while (n != NULL)
	{
		n = n->next;
		elements++;
	}
	return (elements);
}
