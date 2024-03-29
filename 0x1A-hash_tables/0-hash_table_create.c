#include "hash_tables.h"
/**
 * hash_table_create - create a new hash table
 * @size: number of buckets
 * Return: the newly created hash table to be returned
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i = 0;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
		return (NULL);
	for (; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
