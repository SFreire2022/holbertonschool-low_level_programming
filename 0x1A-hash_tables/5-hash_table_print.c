#include "hash_tables.h"

/**
 * hash_table_print - Prints all the elements in the hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	int flag = 0;
	hash_node_t *aux_node;

	if (ht)
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			if (ht->array[index] == NULL)
				continue;
			else
			{
				for (aux_node = ht->array[index]; aux_node; aux_node = aux_node->next)
				{
					if (flag == 1)
						printf(", ");
					printf("'%s': '%s'", aux_node->key, aux_node->value), flag = 1;
				}
			}
		}
		printf("}\n");
	}
}
