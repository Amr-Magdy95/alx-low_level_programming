#include <stdio.h>
/**
 * main - main entry
 * Return: 0 for success
 */
int main(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		putchar(48 + ch);
		if (ch < 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
