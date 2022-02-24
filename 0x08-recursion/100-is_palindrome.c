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
 * check_pal - Function that checks if it is a palindrome nr
 * @s: Number
 * @indx: Index
 * @lngth: Length
 * Return: 0 or 1
 */

int check_pal(char *s, int lngth, int indx)
{
	if (s[indx] == s[lngth / 2])
	{
		return (1);
	}
	if (s[indx] == s[lngth - indx - 1])
	{
		return (check_pal(s, lngth, indx + 1));
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
	int indx = 0;
	int lngth = _find_l(s);

	if (!(*s))
	{
		return (1);
	}
	else
	{
		return (check_pal(s, lngth, indx));
	}
}
