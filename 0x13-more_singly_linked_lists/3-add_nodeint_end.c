#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * of a listint_t type.
 * @head: head of the linked list.
 * @n: Int to set in the new node.
 * Return: address of the head of the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL; /* set the last pointer element to null */
	temp = *head; /* To start the traverse */

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL) /* Traverse til the last */
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
