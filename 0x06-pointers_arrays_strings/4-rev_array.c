#include "main.h"

/**
 * reverse_array - Function that reverses the content of the array
 * @a: Pointer
 * @n: Number of elements
 * Return: r
 */

void reverse_array(int *a, int n)
{
	int l = 0;
	int r;

	while (l < n / 2)
	{
		r = a[l];
		a[l] = a[n - l - 1];
		a[n - l - 1] = r;
		l++;
	}
}
