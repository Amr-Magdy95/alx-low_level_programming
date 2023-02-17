#include <stdio.h>
/**
 * main - main entry point for the program
 * Return: returns 0 in case of success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		printf(ch);
	}
	putchar('\n');
	return (0);
}
