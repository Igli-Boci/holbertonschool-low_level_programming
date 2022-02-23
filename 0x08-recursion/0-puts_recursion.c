#include "main.h"

/**
 * _puts_recursion - Functions that prints a string
 * @s: String
 * Return: s reverse
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
