#include "main.h"

/**
 * factorial - Returns the factorial of a number
 * @n: Number
 * Return: -1 if < 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
