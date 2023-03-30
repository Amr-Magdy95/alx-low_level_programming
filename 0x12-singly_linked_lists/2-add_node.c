#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - add a node to the list
 * @head: head of the list
 * @str: value of the node
 * Return: new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = malloc(strlen(str));
	if (temp->str == NULL)
		return (NULL);
	temp->str = strdup(str);

	if (*head == NULL)
	{
		return (temp);
	}
	temp->next = *head;
	*head = temp;
	return (head);


}
