#include "main.h"

/**
 * _strpbrk - Function that searches for any set of bytes in a string
 * @s: Pointer
 * @accept: Bytes
 * Return: s or '\0'
 */

char *_strpbrk(char *s, char *accept)
{
	int l = 0;
	int k = 0;
	int m;

	while (s[l] != '\0')
	{
		m = 0;
		while (accept[k] != '\0')
		{
			if (s[l] == accept[k])
			{
				m = 1;
			}
			return (s);
			k++;
		}
		l++;
	}
	return ('\0');
}
