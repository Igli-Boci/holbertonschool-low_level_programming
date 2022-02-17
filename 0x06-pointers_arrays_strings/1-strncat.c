#include "main.h"

/**
 * _strncat - Function that concatenates 2 string with n bytes
 * @dest: Pointer
 * @src: Pointer
 * @n: Bytes
 * Return: Dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int k;

	while (dest[i] != '\0')
	{
		i++;
	}

	k = 0;
	while (src[k] != '\0' && k < n)
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	return (dest);
}
