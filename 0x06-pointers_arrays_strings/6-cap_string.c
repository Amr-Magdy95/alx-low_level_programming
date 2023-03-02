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
		if (s[i - 1] == ' ' ||
		    s[i - 1] == '!' ||
		    s[i - 1] == ',' ||
		    s[i - 1] == ';' ||
		    s[i - 1] == '.' ||
		    s[i - 1] == '?' ||
		    s[i - 1] == '"' ||
		    s[i - 1] == '(' ||
		    s[i - 1] == ')' ||
		    s[i - 1] == '{' ||
		    s[i - 1] == '\n' ||
		    s[i - 1] == '\t' ||
		    s[i - 1] == '}'
		)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i + 1] -= 32;
		}
		i++;
	}
	return (s);
}
