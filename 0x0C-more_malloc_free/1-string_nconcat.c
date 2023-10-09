#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Concatenate s1 and first n chars of s2.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of characters from s2 to concatenate.
 *
 * Return: Pointer to concatenated string or NULL on failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

    int i = 0;

    int j = 0;

    char *s1start = s1;
    char *s2start = s2;

    while (s1 != '\0')
    {
        i++;
        s1++;
    }
    while (s2 != '\0' && n > 0)
    {
        j++;
        s2++;
        n--;
    }

    s1 = s1start;
    s2 = s2start;

    char *ptr = malloc(i + j + 1);
    if (ptr == NULL)
        return (NULL);
    char *ptrstart = ptr;

    while (s1 != '\0')
    {
        *ptr = *s1;
        ptr++;
        s1++;
    }

    while (s2 != '\0')
    {
        *ptr = *s2;
        ptr++;
        s2++;
    }
    *ptr = '\0';

    ptr = ptrstart;

    return (ptr);
}
