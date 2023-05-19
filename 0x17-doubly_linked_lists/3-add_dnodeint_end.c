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
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = curr;
	curr->next = newNode;
	return (newNode);
}
