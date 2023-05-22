#include "main.h"

/**
 * _strncat - strncat
 * @dest: destination string
 * @src: source string
 * @n: int
 * Return: char ptr
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 1, k = 0;

	while (j == 1)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		i++;
	}
	while (k < n && src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	return (dest);
}
