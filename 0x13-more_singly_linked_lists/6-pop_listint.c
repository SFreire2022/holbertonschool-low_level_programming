#include "lists.h"

/**
 * pop_listint - deletes the head
 * @head: - address to head
 * Return: Returns the saves value
 * the original head had stored
 */
int pop_listint(listint_t **head)
{
	int hn; /* Int value to save n from head */
	listint_t *temp;

	/* Check if head is null */
	if (*head == NULL)
	{
		return (0);
	}

	temp = *head; /* Head's not null, copy to 0th head to temp */
	hn = (*head)->n; /* Save the n attribute from original head */
	*head = (*head)->next; /* Change head from 0th to 1st node, now is the 0th */

	free(temp); /* Delete the old head */

return (hn);
}
