#include "main.h"
#include <stdlib.h>
/**
  *free_grid - function to free a 2D array
  *@grid: pointer to array
  *@height: height of 2D array
  *Return: freed grid
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
