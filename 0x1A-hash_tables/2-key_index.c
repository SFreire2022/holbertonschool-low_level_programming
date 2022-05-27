#include "hash_tables.h"

/**
 * key_index - Function to get the index for the hash table to use by a key
 * @key: key
 * @size: Size of the hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;
	/* Calculates the module for hash returned value divided by array size */
	return (index);
}
