#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: size of the triangle
 * Return: nothing
 */

void print_triangle(int size)
{
	int i = 1;
	int j;

	while (i <= size)
	{
		j = 1;
		while (j <= size)
		{
			if (i <= size - j)
				_putchar(' ');
			else
				_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (size < 1)
		_putchar('\n');
}
