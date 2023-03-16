#include "main.h"
#include <stdlib.h>
/**
 * array_range - range
 * @min: int
 * @max: int
 * Return: int*
 */
int *array_range(int min, int max)
{
	int size = max - min + 1, i = 0;
	int *res;

	if (min > max)
		return (NULL);
	res = malloc(sizeof(*res) * size);
	if (res == NULL)
		return (NULL);
	while (min <= max)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}
