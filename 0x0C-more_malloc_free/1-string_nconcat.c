#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concantenates 2 strings
 * @s1: First str
 * @s2: Second str
 * @n: Bytes
 * Return: Cnct
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l, lngth;
	int k;
	char *cnct;

	lngth = n;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (l = 0; s1[l] != '\0'; l++)
	{
		lngth++;
	}
	cnct = malloc((lngth + 1) * sizeof(char));
	if (cnct == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (l = 0; s1[l] != '\0'; l++, k++)
	{
		cnct[k] = s1[l];
	}
	for (l = 0; s2[l] != '\0' && l < n; l++, k++)
	{
		cnct[k] = s2[l];
	}
	cnct[k] = '\0';

	return (cnct);
}
