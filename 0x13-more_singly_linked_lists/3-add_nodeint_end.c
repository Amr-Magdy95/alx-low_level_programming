#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - description for function
 * @head: head of the LL
 * @n: val of new node
 * Return: return new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;

	newNode = malloc(sizeof(listint_t));
	newNode->next = NULL;
	newNode->n = n;
	temp = *head;

	if (newNode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;
	return (newNode);

}
