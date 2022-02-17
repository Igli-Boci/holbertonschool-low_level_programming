#include "main.h"

/**
 * _strcat - Function that concatenates 2 strings
 * @dest: Pointer
 * Return: Dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int k;

	while (dest[i] != '\0')
	{
		i++;
	}

	k = 0;
	while (src[k] != '\0')
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
