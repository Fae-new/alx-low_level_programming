
#include <stddef.h>
/**
 * _strpbrk - Find the first character from 'accept' in 's'.
 *
 * @s: String to search.
 * @accept: Set of characters to look for.
 *
 * Return: Pointer to the first matching character, or NULL if not found.
 */



char *_strpbrk(char *s, char *accept)
{

char *start = accept;

while (*s != '\0')
{

accept = start;

while (*accept != '\0')
{
if (*s == *accept)
return (s);
accept++;
}

s++;
}

return (NULL);
}
