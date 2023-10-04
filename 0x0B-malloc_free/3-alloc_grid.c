#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * alloc_grid - Allocates a 2D array of integers.
 * @width: Width of the 2D array.
 * @height: Height of the 2D array.
 *
 * Return: Pointer to the allocated 2D array or NULL if it  fails.
 */

int **alloc_grid(int width, int height)
{

int **array;

int i, j;

if (width <= 0 || height <= 0)
return (NULL);

array = malloc((height - 1) * sizeof(int *));

if (array == NULL)
return (NULL);

for (int i = 0; i < height; i++)
{
array[i] = malloc((width - 1) * sizeof(int));
if (array[i] == NULL)
return (NULL);
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
array[i][j] = 0;
}
}

return (array);
}

