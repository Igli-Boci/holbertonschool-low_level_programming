#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterrator - Parameter of each element of an array.
 * @array: Array
 * @size: Size
 * @action: Pointer to a function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t l;

	if (array != 0 && action != 0)
	{
		l = 0;
		while (l < size)
		{
			action(array[l]);
			l++;
		}
	}
}
