#include <stdio.h>
/**
 * main - main entry
 * Return: 0 for success
 */
int main(void)
{
	char ch;
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(48 + n);
	}
	for (ch = 'a'; ch <= 'f'; ch ++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
