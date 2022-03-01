#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space
 * @str: Char
 * Return: dpl
 */

char *_strdup(char *str)
{
	char *dpl;
	int l = 0;
	int k = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[l] != '\0')
	{
		k++;
		l++;
	}
	dpl = malloc((k + 1) * sizeof(char));

	if (dpl == NULL)
	{
		return (NULL);
	}

	l = 0;
	while (str[l] != '\0')
	{
		dpl[l] = str[l];
		l++;
	}
	return (dpl);
}
