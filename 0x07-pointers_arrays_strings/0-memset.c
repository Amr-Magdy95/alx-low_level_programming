#include "main.h"

/**
 * _memset - set memory
 * @s: char ptr
 * @c: char 
 * @n: unsigned int
 * Return: char ptr
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
