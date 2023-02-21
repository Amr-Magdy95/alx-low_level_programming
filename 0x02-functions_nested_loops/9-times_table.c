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
			int val = i * j;

			if (val >= 10)
			{
				_putchar(val / 10 + '0');
				_putchar(val % 10 + '0');
			}
			else
			{
				_putchar(val + '0');
			}
			_putchar(',');
			_putchar(' ');
		}

		_putchar('\n');
	}
}
