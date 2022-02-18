#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: number
 */
void print_number(int n)
{
	unsigned int factorial;

	factorial = n;

	if (n < 0)
	{
		_putchar('-');
		factorial = -factorial;
	}

	if (factorial / 10)
	{
		print_number(factorial / 10);
	}
	_putchar((factorial % 10) + '0');
}
