#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Function that searches for an integer.
 * @array: Array
 * @size: Size
 * @cmp: Pointer to a function that compares.
 * Return: Nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int l;

	if (array != 0 && cmp != 0)
	{
		l = 0;
		while (l < size)
		{
			if (cmp(array[l]) > 0)
			{
				return (l);
			}
			l++;
		}
	}
	return (-1);
}
