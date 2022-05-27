#include "hash_tables.h"

/**
 * hash_table_get - Return the value for a given key.
 * @ht: hash table
 * @key: key
 * Return: NULL if Fail or value if ok
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *aux_node;

	if (!key || !ht || strcmp(key, "") == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

		if (ht->array[index])
		{
			for (aux_node = ht->array[index]; aux_node; aux_node = aux_node->next)
			{
				if (strcmp(aux_node->key, key) == 0)
					return (aux_node->value);
			}
		}
	return (NULL);
}
