#include "lists.h"

/**
 * pop_listint - deletes the head
 * @head: - address to head
 * Return: Returns the saves value
 * the original head had stored
 */
int pop_listint(listint_t **head)
{
	int hn; /*saves int value from head*/
	listint_t *temp;

	/* check if head is null */
	if (*head == NULL)
	{
		return (0);
	}

	temp = *head; /* head's not null, copy to 0th head to temp */
	hn = temp->n; /* save the n attribute from temp */
	*head = (*head)->next; /* the second node is now the head */

	free(temp); /* delete the old head */

return (hn);
}
