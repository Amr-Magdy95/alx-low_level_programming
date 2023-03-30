#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - print LL
 * @h: head of the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t res = 0;
	list_t *temp = NULL;

	temp = malloc(sizeof(list_t));
	temp = (list_t *) h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			temp->len = 0;
			temp->str = malloc(sizeof(char) * 6);
			temp->str = "(nil)";
		}
		printf("[%d] %s\n", temp->len, temp->str);
		res++;
		temp = temp->next;
	}
	return (res);
}
