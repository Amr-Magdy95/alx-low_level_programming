#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: integer param
 * Return: returns a digit
 */
int print_last_digit(int n)
{
	int res;

	res = n % 10;
	if (res < 0)
	{
		res = -1 * res;
	}
	_putchar(48 + res);
	return (res);
}
