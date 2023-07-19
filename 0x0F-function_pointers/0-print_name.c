#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name and pass to pointer f
 * @name: argument to print
 * @f: function pointer to print
 *
 * Return: f Always
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
