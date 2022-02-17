#include "main.h"

/**
 * string_toupper - Make all lowercase to uppercase
 * @upper: string
 * Return: upper
 */

char *string_toupper(char *upper)
{
	int l = 0;

	while (upper[l] != '\0')
	{
		if (upper[l] >= 'a' && upper[l] <= 'z')
		{
			upper[l] = upper[l] - 32;
		}
		l++;
	}
	return (upper);
}
