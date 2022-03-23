#include "lists.h"

/**
 * print_listint_safe - Print a `listint_t` linked list including mem addresses
 * @head: head of linked list
 * Description: Go through the list only once.
 * Return: number of nodes in list. If fails, exit with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;

	while (h)
	{
		printf("[%p] %d\n", (void *)h, h->n);
		len++;

		if ((void *)h->next >= (void *)h)
		{
			printf("-> [%p] %d\n", (void *)h->next, h->next->n);
			return (len);
		}

		h = h->next;
	}

	return (len);
}
