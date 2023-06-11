#include "hash_tables.h"
/**
 * hash_table_set - setting a hash table node
 * @ht: hash table
 * @key: key of node
 * @value: value of node
 * Return: 1 for success 0 for failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long idx;
	hash_node_t *curr, *newNode, *temp;

	if (strcmp(key, "") == 0)
		return (0);

	idx = key_index(key);
	newNode = malloc(sizeof(hash_node_t));
	curr = ht->array[idx];

	if (newNode == NULL)
		return (0);
	newNode->key = key;
	newNode->value = value;
	if (curr == NULL)
	{
		ht->array[idx] = newNode;
	}
	else
	{
		temp = curr;
		while (temp)
		{
			if (temp->key == newNode->key)
			{
				temp->value = newNode->value;
				return (1);
			}
			newNode->next = curr;
			ht->array[idx] = newNode;
		}

	}
	return (1);

}
