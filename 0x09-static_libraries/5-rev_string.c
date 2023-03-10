#include "main.h"

/**
 * rev_string - reverse a string
 * @s: char ptr
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0, j = 0, k = 0;

	while (*(s + k) != '\0')
	{
		k++;
		j++;
	}
	j--;

	while (i < j)
	{
		char temp;

		temp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = temp;
		i++;
		j--;
	}
}
