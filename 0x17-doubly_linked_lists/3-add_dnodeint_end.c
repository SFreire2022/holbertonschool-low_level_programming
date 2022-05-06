#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end
 * of a double linked list
 * @head: Head of the list
 * @n: Value of the element
 * Return: Address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));/* Allocate node */
	dlistint_t *last = *head; /* Used to Traverse*/

	/* if not enough mem return NULL  */
	if (new_node == NULL)
		return (NULL);
	/* Put in the data  */
	new_node->n = n;
	/* This new node is going to be the last node, so */
	/* make next of it as NULL*/
	new_node->next = NULL;
	/* If the Linked List is empty, then make the new node as head */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	/* Else traverse till the last node */
	while (last->next != NULL)
		last = last->next;
	/* Change the next of last node */
	last->next = new_node;
	/* Make last node as previous of new node */
	new_node->prev = last;
	return (new_node);
}
