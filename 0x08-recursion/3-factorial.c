#include "main.h"
/**
 * factorial - desc
 * @n: int
 * Return: int
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
