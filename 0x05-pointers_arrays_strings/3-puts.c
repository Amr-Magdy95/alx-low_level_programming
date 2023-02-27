#include "main.h"

/**
 * _puts - prints strings
 * @str: char ptr
 * Return: 0
 */

void _puts(char *str)
{
	int n = _strlen(str) - 1, i = 0;

	while (i < n)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
