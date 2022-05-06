#include "lists.h"

/**
 * sum_dlistint - Sum of all the data (n) of a doubly linked list
 * @head: Head of the list
 * Return: Sum of the n data
 */
int sum_dlistint(dlistint_t *head)
{
	int res = 0;

	if (head == NULL)
		return (res);
	/* Ensure it is the first element */
	while (head->prev != NULL)
		head = head->prev;
	/* Traverse to the last node adding data to res */
	while (head != NULL)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
