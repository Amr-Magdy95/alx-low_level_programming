#include "main.h"

/**
 * _strlen - prints the length of the string
 * @s: char ptr
 * Return: length of the string
 */

int _strlen(char *s)
{
	int n = 1, i = 0;
	char next_char = *(p + i);

	while (next_char != '\0')
	{
		n++;
		i++;
		next_char = *(p + i);
	}

	return (n);
}
