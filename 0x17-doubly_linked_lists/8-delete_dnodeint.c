#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes nth double linked list node
 * @head: Head of the list
 * @index: Index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux1 = *head;
	dlistint_t *aux2;
	unsigned int i = 0;

	/* Ensure it is the first element */
	if (aux1 != NULL)
		while (aux1->prev != NULL)
			aux1 = aux1->prev;
	/* Traverse to the nth node */
	while (aux1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = aux1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				aux2->next = aux1->next;
				if (aux1->next != NULL)
					aux1->next->prev = aux2;
			}
			free(aux1);
			return (1);
		}
		aux2 = aux1;
		aux1 = aux1->next;
		i++;
	}
	return (-1);
}
