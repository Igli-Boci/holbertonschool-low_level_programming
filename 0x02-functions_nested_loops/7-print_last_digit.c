#include "main.h"
/**
 * print_last_digit - prints last digit
 * @i: The nr given for the last digit
 * Return: 0
 */
int print_last_digit(int i)
{
	int x;

	if (i < 0)
	{
		x = -1 * (i % 10);
		_putchar('0' + x);
		return (i);
	}
	else
	{
		x = i % 10;
		_putchar('0' + x);
		return (i);
	}
}
