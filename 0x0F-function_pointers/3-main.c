#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main
 * @argc: int
 * @argv: char*[]
 * Return: int
 */
int main(int argc, char *argv[])
{
	int (*f)(int a, int b);
	int res = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	res = f(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);

	return (0);
}
