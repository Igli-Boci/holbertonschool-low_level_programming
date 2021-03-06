#include "main.h"

/**
 * _strncpy - Coppies a string to another
 * @dest: Pointer
 * @src: Pointer
 * @n: Bytes
 * Return: Dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
