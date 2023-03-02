#include "main.h"
/**
 * cap_string - descriptive
 * @s: char ptr
 * Return: char ptr
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' ||
		    s[i] == '!' ||
		    s[i] == ',' ||
		    s[i] == ';' ||
		    s[i] == '.' ||
		    s[i] == '?' ||
		    s[i] == '\"' ||
		    s[i] == '(' ||
		    s[i] == '(' ||
		    s[i] == ')' ||
		    s[i] == '{' ||
		    s[i] == '.' ||
		    s[i] == '\n' ||
		    s[i] == '\t' ||
		    s[i] == '}'
		)
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 32;
		}
		i++;
	}
	return (s);
}
