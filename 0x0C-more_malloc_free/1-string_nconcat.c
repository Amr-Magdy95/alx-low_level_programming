#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - desc
 * @s1: char*
 * @s2: char*
 * @n: unsigned int
 * Return: char*
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len = 0, s2len = 0, idx = 0, s2idx = 0;
	char *res;

	if (s1 == NULL)
	{
		s1 = malloc(1);
		if (s1 == NULL)
			return (NULL);
		s1[0] = '\0';
	}
	if (s2 == NULL)
	{
		s2 = malloc(1);
		if (s2 == NULL)
			return (NULL);
		s2[0] = '\0';
	}
	while (s1[s1len] != '\0')
		s1len++;
	while (s2[s2len] != '\0')
		s2len++;
	if (n >= s2len)
		n = s2len;
	res = malloc(sizeof(*res) * (s1len + n) + 1);
	if (res == NULL)
		return (NULL);
	while (idx < s1len)
	{
		res[idx] = s1[idx];
		idx++;
	}
	while (s2idx < n)
	{
		res[idx] = s2[s2idx];
		idx++;
		s2idx++;
	}
	res[idx] = '\0';
	return (res);
}
