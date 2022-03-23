#include "lists.h"

/**
 * print_listint_safe - Print a `listint_t` linked list including mem addresses
 * @head: head of linked list
 * Description: Go through the list only once.
 * Return: number of nodes in list. If fails, exit with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	int diff = 0;
	size_t count;
	const listint_t *current;

	current = head;

	count = 0;
	while (current != NULL)
	{
		count++;
		diff = current - current->next;
		printf("[%p] %i\n", (void *)current, current->n);
		if (diff > 0)
		{
			current = current->next;
		}
		else
		{
			printf("-> [%p] %i\n", (void *)current->next, current->next->n);
			break;
		}
	}
	return (count);
}
