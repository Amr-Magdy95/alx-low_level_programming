#include "function_pointers.h"
/**
 * print_name - desc
 * @name: char *
 * @f: fn ptr
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
