#include "main.h"
/**
 * string_toupper - to upper
 * @s: char ptr
 * Return: char ptr
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 65 && s[i] <= 97)
		{
			s[i] += 32;
		}
		i++;
	}
	return (s);
}
