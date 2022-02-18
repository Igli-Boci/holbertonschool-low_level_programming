#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: number
 *
 */

void print_number(int n)
{
	unsigned int fct;

	fct = n;

	if (n < 0)
	{
		_putchar('-');
		fct = -fct;
	}

	if (fct / 10)
	{
		print_number(fct / 10);
	}
	_putchar((fct % 10) + '0');
}
