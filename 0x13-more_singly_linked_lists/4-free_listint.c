#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - desc
 * @head: head of the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current = head, *temp;
	int j = 1;

	if (head == NULL)
		return;
	while (j == 1)
	{
		temp = current->next;
		free(current);
		current = temp;
		if (temp == NULL)
			break;
	}
}
