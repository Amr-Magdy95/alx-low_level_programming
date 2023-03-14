#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concat two strings
 * @s1: string 1
 * @s2: string 2
 * Return: char ptr
 */
char *str_concat(char *s1, char *s2)
{
	int n = 0, m = 0, i = 0, j = 0;
	char *res;

	if (s1 == NULL)
	{
		s1 = (char *)malloc(sizeof(char));
		s1[0] = '\0';
	}
	if (s2 == NULL)
	{
		s2 = (char *)malloc(sizeof(char));
		s2[0] = '\0';
	}

	while (s1[n] != '\0')
		n++;
	while (s2[m] != '\0')
		m++;
	res = (char *) malloc(sizeof(char) * (m + n) + 1);
	if (res == NULL)
		return (NULL);
	while (i < n)
	{
		res[i] = s1[i];
		i++;
	}
	j = n;
	i = 0;
	while (i < m)
	{
		res[j] = s2[i];
		i++;
		j++;
	}
	res[j + 1] = '\0';
	return (res);


}
