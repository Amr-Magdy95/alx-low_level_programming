#include "main.h"
void print_alphabet(void);
/**
 * main - entry
 * Return: 0 for success
 */
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}

/**
 * print_alphabet - printing all the alphabets in lowercase
 * Return: returns nothing but prints on the screen
 */
void print_alphabet(void)
{
	for (char i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
}
