#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - desc
 * @head: list
 * @str: string val
 * Return: head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *temp, *node;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	while (str[len])
		len++;
	temp->len = len;
	temp->str = strdup(str);
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	node = (*head);
	while (node->next != NULL)
		node = node->next;
	node->next = temp;

	return (temp);
}
