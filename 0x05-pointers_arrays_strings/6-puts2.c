#include "main.h"

/**
 * puts2 - puts2
 * @str: char ptr
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0, j = 1;

	while (j == 1)
	{
		if (*(str + i) == '\0' || *(str + i - 1) == '\0')
		{
			break;
		}
		_putchar(*(str + i));
		i += 2;
	}
}
