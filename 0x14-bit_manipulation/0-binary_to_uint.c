#include "main.h"
/**
 * binary_to_uint - desc
 * @b: in bin
 * Return: uint
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int res = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		res = 2 * res + (b[i] - '0');
	}
	return (res);
}
