#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function that concatenates 2 strings
 * @s1: Char 1
 * @s2: Char 2
 * Return: cnct
 */

char *str_concat(char *s1, char *s2)
{
	char *cnct;
	int l;
	int k;
	int m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	m = 0;
	l = 0;
	while (s1[l] != '\0')
	{
		m++;
		l++;
	}
	while (s2[l] != '\0')
	{
		m++;
		l++;
	}
	cnct = malloc((m + 1) * sizeof(char));
	if (cnct == NULL)
		return (NULL);
	k = 0;
	l = 0;
	while (s1[l] != '\0')
	{
		cnct[k] = s1[l];
		k++;
		l++;
	}
	while (s2[l] != '\0')
	{
		cnct[k] = s2[l];
		k++;
		l++;
	}
	return (cnct);
}
