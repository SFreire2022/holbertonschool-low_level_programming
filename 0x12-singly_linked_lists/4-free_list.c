#include "lists.h"

/**
 * free_list - frees all elements allocated by list of list_t
 * @head: Pointer to the first element to begin the deletion
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
