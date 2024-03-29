#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - fn
 * @head: head of dLL
 * @n: val
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode =  malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = (*head);
	if ((*head) != NULL)
		(*head)->prev = newNode;
	*head = newNode;

	return (newNode);
}
