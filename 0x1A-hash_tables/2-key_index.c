#include "hash_tables.h"
/**
 * key_index - map key to idx
 * @key: key to be hashed
 * @size: size of the array
 * Return: idx of bucket
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = djb2(key);
	return (hash % size);
}
