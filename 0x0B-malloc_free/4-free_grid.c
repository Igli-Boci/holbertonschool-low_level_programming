#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid previously created
 * @grid: 2D grid
 * @height: Height
 * Return: grid
 */

void free_grid(int **grid, int height)
{
	int rw;

	rw = 0;
	while (rw < height)
	{
		free(grid[rw]);
		rw++;
	}
	free(grid);
}
