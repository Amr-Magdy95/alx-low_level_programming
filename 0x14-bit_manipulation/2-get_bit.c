#include "main.h"
/**
 * get_bit - desc
 * @n: number
 * @index: desc
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int res;

	if (index > 63)
		return (-1);
	res = (n >> index) & 1;

	return (res);
}
