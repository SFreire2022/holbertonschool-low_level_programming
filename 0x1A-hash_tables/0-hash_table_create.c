#include "hash_tables.h"

/**
  * hash_table_create - Function to create a hash table.
  * @size: Size of the hash table.
  * Return: Pointer to the hash table
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index;
	hash_table_t *created_table;

	if (size <= 0)
		return (NULL);
	/* Alloc memory for hash table */
	created_table = malloc(sizeof(hash_table_t));
	if (!created_table)
		return (NULL);
	/* Set the value size for hash table */
	created_table->size = size;
	/* Alloc memory for the array of nodes (size is the length) */
	created_table->array = malloc(size * sizeof(hash_node_t *));
	/* if not enought contiguous memory, free reserved memory for hash table */
	if (!created_table->array)
	{
		free(created_table);
		return (NULL);
	}
	/* Otherwise set every node in the array to NULL */
	for (index = 0; index < size; index++)
		created_table->array[index] = NULL;
	return (created_table);
}
