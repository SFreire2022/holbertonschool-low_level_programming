#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts new node at given position
 * @h: Head of the list
 * @idx: Index pos for new node
 * @n: New node value
 * Return: New node addr if ok or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *head = *h;
	unsigned int i = 1;

	/* if index == 0  add to the beginning */
	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		/* Ensure it is the first element */
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		/* Traverse to the nth node */
		while (head != NULL)
		{
			if (i == idx)
			{
				/* if idx == last node add at the end */
				if (head->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));/* Add node between idx pos */
					if (new != NULL)
					{
						new_node->n = n;/* Set data for the new node */
						new_node->next = head->next;/* Reorder pointers */
						new_node->prev = head;
						head->next->prev = new_node;
						head->next = new_node;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}
	return (new_node);
}
