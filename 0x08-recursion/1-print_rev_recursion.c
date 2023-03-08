#include "main.h"
/**
 * _print_rev_recursion - rev
 * @s: char ptr
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(s[0]);
}