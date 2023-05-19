#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - fn
 * @head: head of dLL
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nextNode;
	int j = 1;

	if (head == NULL)
		return;
	while (j == 1)
	{
		nextNode = head->next;
		free(head);
		head = nextNode;
		if (head == NULL)
			break;
	}
}
