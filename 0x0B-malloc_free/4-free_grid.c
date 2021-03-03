#include "holberton.h"
/**
  *free_grid - free 2D grid
  *@grid: the element to be freed
  *@height: the size of grid to free
  *Return: void
  *
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height ; i++)
		free(grid[i]);
	free(grid);
}
