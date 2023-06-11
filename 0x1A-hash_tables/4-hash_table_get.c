#include "hash_tables.h"
/**
 * hash_table_get - getting a value of a key
 * @ht: hash table
 * @key: target key
 * Return: value of key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *curr;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	curr = ht->array[idx];

	if (curr == NULL)
		return (NULL);
	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
			return (curr->value);
		curr = curr->next;
	}
	return (NULL);
}
