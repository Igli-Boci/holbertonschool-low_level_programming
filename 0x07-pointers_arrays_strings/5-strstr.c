#include "main.h"

/**
 * _strstr - Function that find a substring
 * @haystack: Pointer
 * @needle: Substring
 * Return: needle or '\0'
 */

char *_strstr(char *haystack, char *needle)
{
	int l = 0;
	int k;

	while (haystack[l] != '\0')
	{
		k = 0;
		while (needle[k] != '\0')
		{
			if (haystack[l + k] == needle[k])
			{
				return (needle);
			}
			k++;
		}
		l++;
	}
	return ('\0');
}
