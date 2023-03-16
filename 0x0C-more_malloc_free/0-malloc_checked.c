#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - desc
 * @b: unsigned int
 * Return: void *
 */
void *malloc_checked(unsigned int b)
{
	void *res = malloc(b);

	if (res == NULL)
	{
		exit(98);
	}
	else
	{
		return (res);
	}
}
