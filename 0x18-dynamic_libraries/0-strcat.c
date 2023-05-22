#include "main.h"

/**
 * _strcat - concats two strings
 * @dest: destination
 * @src: source
 * Return: ptr to dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 1, k = 0;

	while (j == 1)
	{
		if (*(dest + i) == '\0')
		{
			break;
		}
		i++;
	}

	while (j == 1)
	{
		*(dest + i) = *(src + k);
		if (*(src + k) == '\0')
		{
			break;
		}
		i++;
		k++;
	}

	return (dest);
}
