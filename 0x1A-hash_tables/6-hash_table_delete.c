#include "hash_tables.h"

/**
 * hash_table_delete - gets rid of the
 * hashtable
 * @ht: hash table
 * Return: Always Void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp, *head;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			head = ht->array[index];
			while (head != NULL)
			{
				temp = head;
				head = head->next;
				free(temp->value);
				free(temp->key);
				free(temp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
