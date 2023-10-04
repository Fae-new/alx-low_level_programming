
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _strdup - Duplicates a string in a newly allocated memory.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the duplicated string, NULL if allocation fails.
 */

char *_strdup(char *str)
{

if (str == NULL)
return (NULL);

int i = 0;

char *start = str;

char *ptr;

while (*str != '\0')
{
i++;
str++;
}

ptr = malloc(i + 1);

if (ptr == NULL)
return (NULL);


str = start;

while (*str != '\0')
{
*ptr = *str;
ptr++;
str++;
}

*ptr = '\0';

return (ptr - i);
}
