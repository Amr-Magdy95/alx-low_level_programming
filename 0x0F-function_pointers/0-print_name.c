#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - desc
 * @name: char *
 * @f: fn ptr
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || (*f) == NULL)
		return;
	(*f)(name);
}
