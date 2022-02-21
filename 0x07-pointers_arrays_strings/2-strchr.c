#include "main.h"
#include <stdio.h>

/**
 * _strchr - Function that locates a char in a str
 * @s: String
 * @c: Char
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int l = 0;

	while (s[l] != '\0')
	{
		if (s[l] == c)
		{
			return (s + l);
		}
		l++;
	}
	if (s[l] == c)
	{
		return (s + l);
	}
	else
	{
		return ('\0');
	}
}
