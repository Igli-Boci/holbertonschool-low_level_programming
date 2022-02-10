#include "main.h"

/**
 * print_square - print a square
 * @size: size of square
 * return: nothing
 */

void print_square(int size)
{
	int i = 0;
	int j;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (size < 1)
		_putchar('\n');
}

