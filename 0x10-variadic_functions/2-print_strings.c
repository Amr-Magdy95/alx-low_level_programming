#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - desc
 * @separator: string
 * @n: int
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *temp;

	if (n == 0)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(ap, char *);
		if (temp == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", temp);
		}
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
