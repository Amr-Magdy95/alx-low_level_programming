#include "main.h"
/**
 *_strchr - descriptive
 *@s: char ptr
 *@c: char
 *Return: char ptr
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (null);
}