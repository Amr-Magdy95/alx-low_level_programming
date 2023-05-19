#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - fn
 * @h: head of LL
 * Return: count
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
