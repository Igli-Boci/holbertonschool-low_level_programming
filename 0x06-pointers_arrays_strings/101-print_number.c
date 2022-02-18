#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: number
 */
void print_number(int n)
{
	unsigned int factor;

	factor = n;

	if (n < 0)
	{
		_putchar('-');
		factor = -factor;
	}

	if (factor / 10)
		print_number(factor / 10);
	_putchar((factor % 10) + '0');
}
