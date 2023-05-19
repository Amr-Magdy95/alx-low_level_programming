#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - fn
 * @h: head
 * @idx: index 
 * @n: data
 * Return: new node or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *curr = (*h), *prev;
	unsigned int i = 0;

	if ( (*h) == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(dlistint_t));
	newNode->n = n;
	while (i < idx)
	{
		curr = curr->next;
		if (curr == NULL)
			return (NULL);
		i++;
	}
	prev = curr->prev;
	prev->next = newNode;
	curr->prev = newNode;
	newNode->next = curr;
	newNode->prev = prev;
	return (newNode);


}
