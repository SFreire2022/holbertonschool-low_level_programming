#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at the given position.
 * @head: contains the address of head
 * @index: what node to delete
 * Return: -1 | 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head; /* copies *head contents to temp */
	listint_t *afternode; /* Ptr to keep the addr of nxt elem from deltd one*/
	unsigned int nnode; /* node counter */

	/* General checker if *head/head == NULL */
	if (*head == NULL || head == NULL)
	{
		free(*head);
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}

	else
	{
		for (nnode = 0; nnode < index; nnode++)
		{
			if (temp == NULL)
			{
				return (-1);
			}
			temp = temp->next; /* Get to the required index + 1 (TBDel)*/
		}

		afternode = temp; /* copy the address of next */
		free(temp); /* remove the current node */

		/* linked lists can't be indexed in reverse, get to the required index */
		temp = *head; /* resetting temp */
		for (nnode = 0; nnode < index - 1; nnode++)
		{
			temp = temp->next; /* get to the required index */
		}
		temp->next = afternode->next; /* copy addr of node after deleted node */
	}
return (1);
}
