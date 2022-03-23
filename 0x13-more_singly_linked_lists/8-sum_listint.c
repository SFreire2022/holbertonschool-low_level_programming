#include "lists.h"

/**
 * sum_listint - sums all nodes content
 * @head: Pointer to first node address
 * Return: Returns 0 as the sum if head's null
 * else the list content's sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head; /* copy head node to temp to traverse*/
	int nnode; /* node counter */
	int sum = 0; /* initializing sum with 0 */

	if (head) /* if not null */
	{
		for (nnode = 0; temp != NULL; nnode++)
		{
			sum += temp->n; /* add and update sum */
			temp = temp->next; /* move to the next index */
		}
	}
return (sum); /* returns the sum */
}
