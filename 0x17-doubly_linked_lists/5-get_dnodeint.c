#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a
 * double linked list
 * @head: Head of the list
 * @index: Node index
 * Return: nth pos node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	/* Ensure it is the first element */
	while (head->prev != NULL)
		head = head->prev;
	/* Traverse to the nth node */
	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}

	return (head);
}
