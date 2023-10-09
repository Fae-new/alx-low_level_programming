#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array, initializes to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Description: Allocates memory for an array of @nmemb elements
 * Return: Pointer to allocated and initialized memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size);


void *_calloc(unsigned int nmemb, unsigned int size)
{

int i;

void *ptr = malloc(nmemb * size);

if (ptr == NULL)
return (NULL);

if (nmemb == 0 || size == 0)
return (NULL);

char *char_ptr = ptr;
for (i = 0; i < nmemb * size; i++)
{
char_ptr[i] = 0;
}

return (ptr);
}
