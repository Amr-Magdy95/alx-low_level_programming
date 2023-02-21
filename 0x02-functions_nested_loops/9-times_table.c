#include "main.h"
/**
 * times_table - oh no
 * Return: 0
 */
void times_table(void)
{
	int i = 0, j = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(i * j);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
