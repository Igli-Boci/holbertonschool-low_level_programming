#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer
 * @width: Row
 * @height: Col
 * Return: Td array
 */

int **alloc_grid(int width, int height)
{
	int **tdarr;
	int l, k, m, n;

	l = k = n = 0;
	if (width <= 0 || height <= 0)
		return (NULL);

	tdarr = malloc(sizeof(int *) * height);

	if (tdarr == NULL)
		return (NULL);
	for (l = 0; l < height; l++)
		tdarr[l] = malloc(sizeof(int) * width);
		if (tdarr[l] == NULL)
		{
			for (m = 0; m < l; m++)
				free(tdarr[m]);
			free(tdarr);
			return (NULL);
		}
	for (k = 0; k < height; k++)
	{
		for (n = 0; n < width; n++)
		{
			tdarr[l][n] = 0;
		}
	}
	return (tdarr);
}
