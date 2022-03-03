#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function that creates an array of integers
 * @min: Minimum value
 * @max: Maximum value
 * Return: array1
 */

int *array_range(int min, int max)
{
	int lngth;
	int *array1;
	int l;

	if (min > max)
	{
		return (NULL);
	}

	lngth = max - min + 1;
	array1 = malloc(lngth * sizeof(int));

	if (array1 == NULL)
	{
		return (NULL);
	}
	
	l = 0;
	while (l < lngth)
	{
		array1[l] = min++;
		l++;
	}
	return (array1);
}
