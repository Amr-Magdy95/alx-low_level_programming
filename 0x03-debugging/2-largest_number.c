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
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else if (c > a && a > b)
	{
		largest = c;
	}

	return (largest);
}
