#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * @c: The argument to be checked for a letter, lower case or uppercase
 * Return: 1 if c is a letter lowercase or uppercase and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
