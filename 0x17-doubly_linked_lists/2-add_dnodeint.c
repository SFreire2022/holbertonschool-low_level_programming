#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* Allocate node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

    /* Put in the data  */
	new_node->n = n;

    /* Make next of new node as head and previous as NULL */
	new_node->next = (*head);
	new_node->prev = NULL;

    /* Change prev of head node to new node */
	if ((*head) != NULL)
		(*head)->prev = new_node;

    /* Move the head to point to the new node */
	(*head) = new_node;

	return (new_node);
}
