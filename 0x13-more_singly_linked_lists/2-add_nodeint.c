#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - add node to beginning
 * @head: head of the node
 * @n: val of the new node
 * Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = (*head);
	return (temp);
}
