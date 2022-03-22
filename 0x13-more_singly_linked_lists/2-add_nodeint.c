#include "lists.h"

/**
 * add_nodeint - Adds a new node to the list at the begining
 * of a listint_t type.
 * adds the length of given string
 * @head: head of the linked list.
 * @n: Int to set in the new node.
 * Return: Address of the head of the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
