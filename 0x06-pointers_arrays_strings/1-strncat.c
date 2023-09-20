#include "main.h"

/**
 * _strncat - Concatenates n characters from one string to another.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Number of characters to concatenate from src.
 *
 * Return: A pointer to the resulting concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{

char *firstelement = dest;

while (*dest != '\0')
{
dest++;
}

while (n > 0 && *src != '\0')
{
*dest = *src;
n--;
dest++;
src++;
}
return (firstelement);
}

