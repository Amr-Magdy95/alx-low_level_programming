#include "main.h"
/**
 *_memcpy - copies from src to dest
 *@dest: char ptr
 *@src: char ptr
 *@n: unsigned int
 *Return: char ptr
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
