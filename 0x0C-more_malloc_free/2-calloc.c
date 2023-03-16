#include "main.h"
#include <stdlib.h>
/**
 * _calloc - desc
 * @nmemb: int
 * @size: int
 * Return: void*
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0, j = 0;
	int *res;

	if (nmemb == 0 || size == 0)
		return (NULL);
	res = malloc(sizeof(*res) * nmemb * size);
	if (res == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		for (j = 0; j < size; j++)
		{
			res[i + j] = 0;
		}
	}
	return ((void *)res);

}
