#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - fn
 * @h: head of the ll
 * Return: count
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);

	}
	return (count);
}

