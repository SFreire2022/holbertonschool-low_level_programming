#include "lists.h"

/**
 * insert_nodeint_at_index - adds node at the given position.
 * @head: Pointer to first node address
 * @idx: index where node should be added
 * @n: int to be added in the new node
 * Return: The address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int nnode; /* node counter */
	listint_t *temp = *head; /* copies *head contents to temp */
	listint_t *newnode = malloc(sizeof(listint_t)); /*newnode alocation*/

	/* newnode - malloc check */
	if (newnode == NULL)
		return (NULL);

	/* Put the node at the front of the list */
	if (idx == 0)
	{
		newnode->n = n; /* saves n into newnode's n attribute */
		newnode->next = *head; /* connects orphaned node to head (*head = &head) */
		*head = newnode; /* makes newnode the head now */
	}

	else
	{
		/* get to the nth index referred by idx */
		for (nnode = 0; nnode < idx - 1; nnode++) /* nnode<idx-1 to put the new */
		{ /* at the start of the index pos shifting the old node 1 pos*/
			/* check if idx is more than the # of nodes */
			if (temp->next == NULL)
			{
				return (NULL);
			}

			/* else, continue incrementing */
			temp = temp->next;
		}
		newnode->n = n; /* copy given data into newnode */
		newnode->next = temp->next; /* copy the addr of temp->next at the gvn pos*/
		/* to the newnode->next */
		temp->next = newnode; /* Now points index next to newnode*/
	}
return (newnode);
}
