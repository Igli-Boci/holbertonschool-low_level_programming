#include "main.h"

/**
 * _memcpy - Function that copies n char from src to dest
 * @dest: Destination
 * @src: Source
 * @n: Size
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l = 0;

	while (l < n)
	{
		dest[l] = src[l];
		l++;
	}
	return (dest);
}
