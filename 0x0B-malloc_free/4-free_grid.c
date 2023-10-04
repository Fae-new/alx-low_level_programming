#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * free_grid - Frees a 2D array of integers.
 * @grid: Pointer to the 2D array.
 * @height: Height of the 2D array.
 *
 * Description: deallocates memory for a 2D array of integers.
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
