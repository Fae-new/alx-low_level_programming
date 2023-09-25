#include <stddef.h>

/**
 * _strstr - Find the first occurrence of a substring.
 *
 * @haystack: String to search in.
 * @needle: Substring to locate.
 *
 * Return: Pointer to the first occurrence or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{

char *start = needle;

while (*haystack != '\0')
{

needle = start;

while (*needle != '\0')

{
if (*haystack == *needle)
{
char *start1 = needle;
haystack++;
needle++;
while (*needle != '\0' && *haystack != '\0')
{
if (*haystack != *needle)
break;
else
{
return (start1);
}
}
}

needle++;
}

haystack++;
}

return (NULL);
}
