#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: char ptr
 * Return: 0
 */

void puts_half(char *str)
{
	int i = 0, n = 0;

	while (*(str + i) != '\0')
	{
		i++;
		n++;
	}
	n++;
	if (n % 2 == 0)
	{
		i = n - 1;
	}
	else
	{
		i = n;
	}
	i = i / 2;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');


}
