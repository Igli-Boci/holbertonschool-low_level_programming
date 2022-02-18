#include "main.h"

/**
 * rot13 - reverse with the 13th letter
 * @rot: pointer
 * Return: rot
 */

char *rot13(char *rot)
{
	int l = 0;
	int k = 0;
	char n1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (rot[l] != '\0')
	{
		while (n1[k] != '\0')
		{
			if (rot[l] == n1[k])
			{
				rot[l] = n2[k];
				break;
			}
			k++;
		}
		l++;
	}
	return (rot);
}
