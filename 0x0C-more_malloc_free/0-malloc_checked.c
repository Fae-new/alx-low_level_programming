
#include <stdlib.h>

/**
 * malloc_checked - Allocate memory, exit on failure.
 *
 * @b: Size of memory to allocate.
 *
 * Description: Allocates @b bytes using malloc. Exits if allocation fails.
 * Return: pointer to allocated memory on success.
 */



void *malloc_checked(unsigned int b)
{

void *ptr = malloc(b);

if (ptr == NULL)
exit(98);
return (ptr);
}


