#include "main.h"

/**
 * print_most_numbers - temp
 * Return: nothing just prints
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n == 4 || n == 2)
		{
			continue;
		}
		else
		{
			_putchar('0' + n);
		}
	}
	_putchar('\n');
}
