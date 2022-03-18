#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t type.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head of the new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL; /* set the last pointer element to null */
	temp = *head;

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
