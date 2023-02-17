#include <stdio.h>
/*
 * main - main entry point for the program
 * Return: returns 0 in case of success
 */
int main(void)
{
	char ch;

	for ( ch = 'a'; ch <= 'z'; ch++ )
	{
		putchar(ch);
	
	}
	for ( ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
