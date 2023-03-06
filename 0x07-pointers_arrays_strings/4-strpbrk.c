#include "main.h"
/**
 *_strpbrk - desc
 *@s: char ptr
 *@accept: char ptr
 *Return: char ptr
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		int found = 0;
		int j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
