#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - fn
 * @head: head of dLL
 * @n: val
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t)), *curr = *head;

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = newNode;
		return (newNode);
	}
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	newNode->prev = curr;
	curr->next = newNode;
	return (newNode);
}
