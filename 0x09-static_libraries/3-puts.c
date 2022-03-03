#include "main.h"

/**
 * _puts - function that prints a string
 * to print it we can use also use *(str + l)
 * @str: pointer to char
 * Return: nothing
 */

void _puts(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
