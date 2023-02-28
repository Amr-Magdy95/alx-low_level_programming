#include "main.h"

/**
 * _strcpy - copies string
 * @dest: char ptr
 * @src: char str
 * Return: returns ptr the char
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 1;

	while (j == 1)
	{
		*(dest + i) = *(src + i);
		i++;

	}

	return (dest);
}
