#include <unistd.h>

/**
 * _putchar - desc
 * @c: char
 * Return: int
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}
