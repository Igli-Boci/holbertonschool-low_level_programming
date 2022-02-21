#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: Pointer
 * @accept: Bytes
 * Return: prefix
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int prefix = 0;
	int l = 0;
	int k = 0;
	int m;

	while (s[l] != '\0')
	{
		m = 0;
		while (accept[k] != '\0')
		{
			if (s[l] == accept[j])
			{
				m = 1;
			}
			k++;
		}
		k = 0;
		if (m == 0)
			break;
		prefix++;
		l++;
	}
	return (prefix);
}
