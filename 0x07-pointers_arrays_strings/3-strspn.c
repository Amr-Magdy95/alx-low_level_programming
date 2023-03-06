#include "main.h"
/**
 *findChar - escriptive
 *@c: char
 *@s: char ptr
 *Return: unsigned int
 */
unsigned int findChar(char c, char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (i + 1);
		}
		i++;
	}
	return (0);
}

/**
 *_strspn - descriptive
 *@s: chat ptr
 *@accept: char ptr
 *Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int res = 0;

	while (accept[i] != '\0')
	{
		unsigned int n = findChar(accept[i], s);

		if (res < n)
		{
			res = n;
		}
		i++;
	}
	return (res);
}
