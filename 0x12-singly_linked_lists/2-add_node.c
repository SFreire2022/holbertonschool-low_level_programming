#include "lists.h"

/**
 * add_node - Adds a new node to the list at the begining
 * of a list_t type.
 * adds the length of given string
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: Address of the head of the new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
