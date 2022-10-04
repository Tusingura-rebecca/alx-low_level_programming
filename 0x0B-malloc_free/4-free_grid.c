#include "main.h"

/**
*free_grid - frees a 2D array
*@grid: memory block to free
*@height: height of array
*Return: 0
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
