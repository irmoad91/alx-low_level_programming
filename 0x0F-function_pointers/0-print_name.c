#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: string
 * @f: function ptr
 * Return: void
 */
oid print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
