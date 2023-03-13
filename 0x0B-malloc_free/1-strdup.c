#include "main.h"
#include <stdlib.h>

/**
 * _strdup - desc
 * @str: char *
 * Return: char *
 */

char *_strdup(char *str)
{
	char *p;
	int i = 0, k = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
		i++;

	p = (char *) malloc(i * sizeof(char) + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	while (k <= i)
	{
		p[k] = str[k];
		k++;

	}
	p[i + 1] = '\0';
	return (p);
}
