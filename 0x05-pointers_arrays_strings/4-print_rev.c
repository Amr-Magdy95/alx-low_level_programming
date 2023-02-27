#include "main.h"

/**
 * print_rev - prints the string in reverse
 * @s: char ptr
 * Return: nothing
 */

void print_rev(char *s)
{
	int n = 0, i = 0;

	while (*(s + i) != '\0')
	{
		n++;
		i++;
	}

	n = n - 1;

	while (n >= 0)
	{
		_putchar(*(s + n));
		n--;
	}
	_putchar('\n');
}
