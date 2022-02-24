#include "main.h"

/**
 * _find_l - Function that finds the length
 * @s: Number
 * Return: Length
 */

int _find_l(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _find_l(s + 1));
	}
}

/**
 * check_palindrome - Function that checks if it is a palindrome nr
 * @s: Number
 * @i: Index
 * @l: Length
 * Return: 0 or 1
 */

int check_palindrome(char *s, int i, int l)
{
	if (s[i] == s[l / 2])
	{
		return (1);
	}
	if (s[i] == s[l - i - 1])
	{
		return (check_palindrome(s, l, i + 1));
	}
	return (0);
}

/**
 * is_palindrome - Function that finds palindrome numbers
 * @s: Number
 * Return: Palindrome
 */

int is_palindrome(char *s)
{
	int lngth;

	lngth = _find_l;

	if (lngth <= 1)
	{
		return (1);
	}
	else
	{
		return (check_palindrome(s, lngth));
	}
}
