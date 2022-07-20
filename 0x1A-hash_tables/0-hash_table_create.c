#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table.
 * @size: Size of the array.
 * Return: Returns a pointer to the newly created hash table or NULL.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;

	hash_table_t *ht = malloc(sizeof(hash_table_t) * 1);

	if (ht == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->array = malloc(sizeof(hash_node_t *) * size);

	for (i = 0; i < size ; i++)
	{
		ht->array[i] = NULL;
	}
	ht->size = size;
	return (ht);
}
