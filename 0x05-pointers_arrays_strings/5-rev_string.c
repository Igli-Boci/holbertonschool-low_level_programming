#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: String to reverse
 * Return: nothing.
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	char tmp;

	while (s[i] != '\0')
	{
		i++;
	}
	i -= 1;

	while (s[j] < s[i])
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
