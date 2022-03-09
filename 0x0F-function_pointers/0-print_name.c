#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Function that points to the function in main
 * @name: Name
 * @f: Function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
