#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function that allocates memory for an array using malloc
 * @nmemb: Nr of elements
 * @size: Size
 * Return: array1
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array1;
	unsigned int l;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array1 = malloc(nmemb * size);

	if (my_arr == NULL)
	{
		return (NULL);
	}

	l = 0;
	while (l < nmemb * size)
	{
		array1[l] = 0;
		l++;
	}

	return (array1);
}
