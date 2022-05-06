#include "lists.h"

/**
* free_dlistint - Frees a double liked list.
* @head: Head of the list
*Return: Nothing (void)
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	if (head == NULL)
		return (void);
	/* Ensure it is the first element */
	while (head->prev != NULL)
		head = head->prev;
	/* Traverse to the last node */
	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
	return (void);
}
