#include "main.h"

/**
 * _sqrt_recursion - Function that return the natural square root of a nr
 * @n: Number
 * Return: -1 if it doesnt have natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (_get_SQroot(n, 0));
	}
}

/**
 * _get_SQroot - Function that find the sqroot
 * @n: Number
 * @r: Root
 * Return: r or -1
 */

int _get_SQroot(int n, int r)
{
	if (r * r == n)
	{
		return (r);
	}
	if (r == n / 2)
	{
		return (-1);
	}
	else
	{
		return (_get_SQroot(n, r + 1));
	}
}
