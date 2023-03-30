#include "lists.h"
#include <stdlib.h>
/**
 * list_len - returns the length of the list
 * @h: head of the list
 * Return: length of the list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	temp = (list_t *)h;

	while (temp != NULL)
	{
		n++;
		temp = temp->next;
	}
	return (n);




}
