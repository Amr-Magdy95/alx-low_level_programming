#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - desc
 * @h: head of LL
 * Return: num of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	listint_t *temp = (listint_t *)h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
