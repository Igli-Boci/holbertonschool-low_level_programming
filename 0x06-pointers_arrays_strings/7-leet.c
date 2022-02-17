#include "main.h"

/**
 * leet - Function that encodes a string
 * @str: Pointer
 * Return: Numbers
 */

char *leet(char *str)
{
	int i = 0;
	int l;
	char a[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	while (str[i] != '\n')
	{
		l = 0;
		while (a[l] != 0)
		{
			if (str[i] == a[l])
				str[i] = n[l];
			l++;
		}
		i++;
	}
	return (str);
}
