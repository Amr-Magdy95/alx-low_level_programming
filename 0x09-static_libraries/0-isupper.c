#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks is upper
 * @c: numerical value of char
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

