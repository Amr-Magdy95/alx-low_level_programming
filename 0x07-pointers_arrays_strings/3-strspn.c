#include "main.h"
/**
 *_strspn - descriptive
 *@s: chat ptr
 *@accept: char ptr
 *Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		bool found = false;
		int j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = true;
			}
			j++;
		}

		if (!found)
		{
			return (i);
		}
		i++;
	}
}
