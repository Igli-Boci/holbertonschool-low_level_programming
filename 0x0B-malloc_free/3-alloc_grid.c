#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - Function that returns a pointer
 * @width: Row
 * @height: Col
 * Return: Td array
 */

int **alloc_grid(int width, int height)
{
	int **tdarr;
	int l, k;

	if (width < 1 || height < 1)
		return (NULL);
	tdarr = malloc(sizeof(int *) * height);
	if (tdarr == NULL)
		return (NULL);
	for (l = 0; l < height; l++)
	{
		tdarr[l] = malloc(sizeof(int) * width);
		if (tdarr[l] == NULL)
		{
			for (--l; l >= 0; l--)
				free(tdarr[l]);
			free(tdarr);
			return (NULL);
		}
	}
	for (l = 0; l < height; l++)
	{
		for (k = 0; k < width; k++)
			tdarr[l][k] = 0;
	}
	return (tdarr);
