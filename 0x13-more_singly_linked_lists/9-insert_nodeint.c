#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - desc
 * @head: head of LL
 * @idx: target idx
 * @n: value of new node
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0, j = 1, k = 0;
	listint_t *temp = *head, *temp2,  *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	while (temp != NULL)
	{
		k++;
		temp = temp->next;
	}
	if (idx >= k)
		return (NULL);
	temp = *head;
	while (j == 1)
	{
		if (i == idx - 1)
			break;
		i++;
		temp = temp->next;

	}
	temp2 = temp->next;
	temp->next = newNode;
	newNode->n = n;
	newNode->next = temp2;
	return (newNode);
}
