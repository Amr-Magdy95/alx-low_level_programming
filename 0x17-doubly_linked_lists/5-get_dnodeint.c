#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - fn
 * @head: head of dLL
 * @index: index of target element
 * Return: target node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0, j = 1;

	if (head == NULL)
		return (NULL);
	while (j == 1)
	{
		if (idx == index)
			return (head);
		idx++;
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (NULL);
}
