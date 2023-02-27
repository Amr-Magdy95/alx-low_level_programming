#include "main.h"

/**
 * swap_int - swap two ints
 * @a: ptr to int
 * @b: int ptr
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*a = c;
}
