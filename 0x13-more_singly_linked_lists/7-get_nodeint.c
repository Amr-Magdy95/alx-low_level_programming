#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - desc
 * @head: head of the LL
 * @index: target index
 * Return: target node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
