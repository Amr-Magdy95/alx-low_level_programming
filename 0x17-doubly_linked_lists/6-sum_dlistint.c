#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - fn
 * @head: head of dLL
 * Return: count
 */
int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
