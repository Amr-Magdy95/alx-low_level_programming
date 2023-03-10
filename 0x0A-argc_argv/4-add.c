#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * @argc: ctr
 * @argv: string array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
	}
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + argv[i];
	}

	return (0);
}
