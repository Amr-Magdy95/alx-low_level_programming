#include "main.h"
/**
 *_memset - set memory
 *@s: char ptr
 *@b: char
 *@n: unsigned int
 *Return: char ptr
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
