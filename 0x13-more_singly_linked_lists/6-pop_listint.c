#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - desc
 * @head: head of the LL
 * Return: value of head
 */

int pop_listint(listint_t **head)
{
	int res = 0;
	listint_t temp;

	if (*head == NULL)
		return (0);
	res = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (res);

}
