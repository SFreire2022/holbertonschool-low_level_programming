#include "lists.h"

/**
 * free_listint2 - frees all elements allocated by list of listint_t and
 * sets the head to NULL.
 * @head: Pointer to the first element to begin the deletion
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp; /* temp node to avoid changing head */

	if (head != NULL)
	{
		while (*head != NULL)
		{
			temp = *head; /* temp now has address to the next node */
			*head = temp->next; /* update head to increment */
			free(temp); /* free the node */
		}
		*head = NULL; /* set head to null */
	}
}
