#include "main.h"

/**
 * get_prime - Function that checks if number is 0 or 1
 * @num: Number
 * @l: Number
 * Return: 0 or 1
 */

int get_prime(int num, int l)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % l == 0)
	{
		return (0);
	}
	if (l == num / 2)
	{
		return (1);
	}
	else
	{
		return (get_prime(num, l + 1));
	}
}

/**
 * is_prime_number - Function that returns 1 if the int is prime number
 * @n: Number
 * Return: 0 or 1 if int is prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (get_prime(n, 2));
	}
}
