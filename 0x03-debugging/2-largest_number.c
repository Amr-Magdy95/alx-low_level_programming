#include "main.h"

/**
 * largest_number - returns the largest of three numbers
 * @a: first num
 * @b: second num
 * @c: third num
 * Return: largest num
 */

int largest_number(int a, int b, int c)
{
	int largest = 0;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	if (b >= a && b >= c)
	{
		largest = b;
	}
	if (c >= a && c >= b)
	{
		largest = c;
	}

	return (largest);
}
