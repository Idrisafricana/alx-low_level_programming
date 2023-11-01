#include "main.h"

/**
 * free_grid - frees the memory of a 2D array
 * @grid: the 2D grid to be freed
 * @height: height dimension of the grid
 *
 * Description: funxn frees the dynamically allocated memory of a 2D grid.
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
