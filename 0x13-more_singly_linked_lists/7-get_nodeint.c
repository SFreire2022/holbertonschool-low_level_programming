#include "lists.h"

/**
 * get_nodeint_at_index - Traverse the list to find given node index.
 * @head: - Starting of the list
 * @index: - Given value as index.
 * Return: The address for the node at the index position.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nnode; /* Counter to traverse list til given index */
	listint_t *temp = head; /* Temporary node to avoid messing head */


	/* loop to the indexth node */
	for (nnode = 0; nnode < index; nnode++)
	{
		if (temp == NULL)
		{
			return (NULL); /* if 'index' is bigger than the list return NULL */
		}
		temp = temp->next; /* enter as many indexes as 'index' limits */
	}

return (temp); /* return the current temp[index] node */
}
