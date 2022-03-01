#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of chars with a specific char in it
 * @size: Size
 * @c: Char
 * Return: e
 */

char *create_array(unsigned int size, char c)
{
	char *e;
	unsigned int l = 0;

	if (size == 0)
	{
		return (NULL);
	}
	e = malloc(size * sizeof(char));

	if (e == NULL)
	{
		return (NULL);
	}

	while (l < size)
	{
		e[l] = c;
		l++;
	}
	return (e);
}
