#include "hash_tables.h"

/**
  * hash_table_delete - Deletes a hash table and free allocated mem.
  * @ht: The hash table to frees.
  * Return: Nothing.
  */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux_node;
	unsigned long int index;

	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		for (aux_node = ht->array[index]; aux_node; aux_node = aux_node->next)
		{
			free(aux_node->key);
			free(aux_node->value);
			free(aux_node);
		}
	}
	free(ht->array);
	free(ht);
}
