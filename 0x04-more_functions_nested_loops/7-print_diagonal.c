#include "main.h"

/**
 * print_diagonal - print a diagonal line in shell
 * @n: number of lines
 * return: nothing
 */

void print_diagonal(int n)
{
	int i = 0;
	int j;

	while (i < n)
	{
		j = 0;

		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n < 1)
		_putchar('\n');
}
