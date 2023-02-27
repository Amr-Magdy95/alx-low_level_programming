#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array
 * @a: arr ptr
 * @n: int
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
		i++;
	}
	_putchar('\n');
}
