#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name
 * @name: name pointer
 * @f: function pointers
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
