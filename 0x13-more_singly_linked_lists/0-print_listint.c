#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - desc
 * @h: head of LL
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t *temp = (listint_t *)h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
