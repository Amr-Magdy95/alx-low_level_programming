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
	int n = 100, i = 0, j = 1;

	if (str == NULL)
	{
		return (NULL);
	}

	p = (char *) malloc(n * sizeof(char));

	while (j == 1)
	{
		if (i >= n && str[i] != '\0')
		{
			return (NULL);
		}
		if(str[i] == '\0')
		{
			p[i] = str[i];
			break;
		}
		p[i] = str[i];
		i++;
	}

	return (p);
}
