#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - desc
 *@a: int ptr to ptr
 *@size: int
 *Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int r1 = 0, r2 = 0, i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				r1 += a[i][j];
			}
			if ((i + j) == (size - 1))
			{
				r2 += a[i][j];
			}
		}
	}
	printf("%d, %d", r1, r2);

}
