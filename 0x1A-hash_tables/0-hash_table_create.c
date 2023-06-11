#include "hash_tables.h"
/**
 * hash_table_create - create a new hash table
 * @size: number of buckets
 * Return: the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t*));
	if (!table->array)
		return (NULL);
	return (table);
}
