#include "main.h"
#include <stdlib.h>
/**
 * create_array - desc
 * @size: unsigned int
 * @c: char
 * Return: char *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *) malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}
