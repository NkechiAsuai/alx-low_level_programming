#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - use free function on previous grid
 * @grid: grid to free
 * @height: height of the grid
 * Return: free'd grid
 */
void free_grid(int **grid, int height)
{
int i;

if (grid != NULL || height != 0)
{
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
}
