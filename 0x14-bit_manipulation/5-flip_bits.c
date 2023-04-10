#include "main.h"
/**
 * flip_bits - desc
 * @n: num
 * @m: num
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c = 0;
	unsigned long int curr, diff = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = diff >> i;
		if (curr & 1)
			c++;
	}
	return (c);
}
