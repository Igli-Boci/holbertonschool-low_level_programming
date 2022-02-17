#include "main.h"

/**
 * _strcmp - Function that find the diff of 2 strings
 * @s1: Pointer
 * @s2: Pointer
 * Return: k
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int k;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			k = s1[i] - s2[i];
			break;
		}
		else
			k = 0;
		i++;
	}
	return (k);
}
