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

	while (i < n / 2)
	{
		r = a[l];
		a[l] = a[n - l];
		a[n - l] = r;
		l++;
	}
}
