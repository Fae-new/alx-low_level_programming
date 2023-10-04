#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * create_array - Allocate and initialize a character array.
 * @size: Size of the array.
 * @c: Character for initialization.
 *
 * Description: Allocates a char array of size 'size' and initializes all
 * elements with 'c'.
 *
 * Return: Pointer to the allocated memory, or NULL on failure.
 */


char *create_array(unsigned int size, char c)
{

char *array;

unsigned int i;

if (size == 0)
return (NULL);

array = malloc(size);

if(array == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
array[i] = c;
}

array[size] = '\0';

return (array);
}
