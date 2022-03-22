#include "lists.h"

/**
 * free_listint - frees all elements allocated by list of listint_t
 * @head: Pointer to the first element to begin the deletion
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
