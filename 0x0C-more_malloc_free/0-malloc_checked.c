#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: Int
 * Return: Pointer l
 */
void *malloc_checked(unsigned int b)
{
	int *l;

	l = malloc(b);

	if (l == NULL)
	{
		exit(98);
	}
	return (l);
}
