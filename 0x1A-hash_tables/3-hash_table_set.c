#include "hash_tables.h"
/**
 * create_node - create a new node
 * @key: key of node
 * @value: value of the node
 * Return: node for success - null for failure
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = malloc(strlen(key) + 1);
	node->value = malloc(strlen(value) + 1);
	if (node->key == NULL || node->value == NULL)
		return (NULL);
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;
	return (node);
}
/**
 * free_node - free node
 * @node: the node to be freed
 * Return: void
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
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

	idx = key_index((const unsigned char *)key, ht->size);
	newNode = create_node(key, value);
	curr = ht->array[idx];

	if (newNode == NULL)
		return (0);
	if (curr == NULL)
	{
		ht->array[idx] = newNode;
	}
	else
	{
		temp = curr;
		while (temp)
		{
			if ((strcmp(temp->key, newNode->key)) == 0)
			{
				free(temp->value);
				temp->value = malloc(strlen(value) + 1);
				if (temp->value == NULL)
					return (0);
				strcpy(temp->value, value);
				free_node(newNode);
				return (1);
			}
			temp = temp->next;
		}
		newNode->next = ht->array[idx];
		ht->array[idx] = newNode;

	}
	return (1);

}
