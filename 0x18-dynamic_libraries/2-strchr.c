#include "main.h"
/**
 *_strchr - descriptive
 *@s: char ptr
 *@c: char
 *Return: char ptr
 */
char *_strchr(char *s, char c)
{
	int i = 0, j = 1;

	while (j == 1)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		if (s[i] == '\0')
		{
			break;
		}
		i++;
	}
	return (0);
}
