#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - desc
 * @separator: string
 * @n: int
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, temp;

	if (n == 0)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(ap, int);
		printf("%d", temp);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");
	va_end(ap);
}
