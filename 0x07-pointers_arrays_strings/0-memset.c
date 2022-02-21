#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte.
 * @s: Pointer
 * @b: Bytes
 * @n: Size
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l = 0;

	while (l < n)
	{
		s[l] = b;
		l++;
	}
	return (s);
}
