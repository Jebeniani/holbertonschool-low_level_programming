#include "hash_tables.h"

/**
 * key_index - it gives the index of a key.
 * @key: it's the key
 * @size: the size of the array of the hash table
 * Return: The index at which the key/value pair
 *  should be stored in the array of the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_indx;

	if (key == NULL)
		return (0);

	if (size == 0)
		return (0);

	key_indx = (hash_djb2(key) % size);
		return (key_indx);
}
