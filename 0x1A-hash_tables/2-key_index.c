#include "hash_tables.h"

/**
 * key_index - Get the index of a key using the djb2 hash function
 * @key: The key to be hashed
 * @size: The size of the array of the hash table
 *
 * Return: The index at which the key should be stored in the hash table.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);

	return (hash_value % size);
}
