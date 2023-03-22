#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - desc
 * @array: arr
 * @size: size of arr
 * @action: fn ptr
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || size <= 0 || (*action) == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
