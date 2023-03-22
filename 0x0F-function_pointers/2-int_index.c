#include "function_pointers.h"
/**
 * int_index - desc
 * @array: int arr
 * @size: size
 * @cmp: fn ptr
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int res = 0, i = 0;

	if (size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		res = cmp(array[i]);
		if (res > 0)
			return (i);
	}
	return (-1);
}
