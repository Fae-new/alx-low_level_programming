#include <main.h>

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area.
 * @b: The byte to be filled.
 * @n: The number of bytes to fill.
 *
 * Return: Pointer to the memory area @s.
 */

char *_memset(char *s, char b, unsigned int n)
{

char *reference = s;

while (n > 0)
{
*s = b;

n--;
s++;
}
return (reference);
}

