#include <unistd.h>

/**
 * _putchar - c to stdout
 * @c: char
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * fb - fizzbuzz
 * Return: print
 */

void fb(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		if (i % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		if (i % 5 != 0 && i % 3 != 0)
		{
			if (i >= 10)
			{
				_putchar('0' + i / 10);
			}
			_putchar('0' + i % 10);
		}
		if (i < 100)
		{
			_putchar(' ');
		}
		else
		{
			_putchar('\n');
		}
	}
}

/**
 * main - entry
 * Return: 0
 */

int main(void)
{
	fb();

	return (0);
}
