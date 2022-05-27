#include "hash_tables.h"

/**
 * hash_table_set - Funtion to add key and value to a hash table
 * @ht: hash table
 * @key: key to be inserted
 * @value: value to be inserted
 * Return: 0 on Failure | 1 on Success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *old_head, *aux_node;

	if (!ht || !key || strcmp(key, "") == 0)
		return (0);
	/* Get the index for a given key (using sintax of prev main)*/
	index = key_index((unsigned char *)key, ht->size);
	/* Search if the key already exists at that node */
	for (aux_node = ht->array[index]; aux_node; aux_node = aux_node->next)
		if (strcmp(aux_node->key, key) == 0)
		{
			free(aux_node->value);
			aux_node->value = strdup(value);
			return (1);
		}
	/* Otherwise create a node and inset key and value */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->value = strdup(value);
	new_node->key = strdup(key);
	/* If head is empty (pointing to NULL) add new node */
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		new_node->next = NULL;
	}
	/* If two different keys collide */
	/*add new node at the head of the linked list */
	else
	{
		/* Make a copy of current head */
		old_head = ht->array[index];
		/* New node point to old head */
		new_node->next = old_head;
		/* Now new node is the head */
		ht->array[index] = new_node;
	}
	return (1);
}
