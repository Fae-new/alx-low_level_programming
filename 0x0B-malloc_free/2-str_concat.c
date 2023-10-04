/**
 * str_concat - Concatenates two strings.
 * @s1: First input string.
 * @s2: Second input string.
 *
 * Return: Pointer to the concatenated string or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
int i = 0;

int j = 0;

char *start1 = s1;
char *start2 = s2;
while (*s1 != '\0')
{
i++;
s1++;
}
while (*s2 != '\0')
{
j++;
s2++;
}

s1 = start1;
s2 = start2;

char *ptr = malloc(i + j + 1);

if (ptr == NULL)
return (NULL);
while (*s1 != '\0')
{
*ptr = *s1;
s1++;
ptr++;
}
while (*s2 != '\0')
{
*ptr = *s2;
s2++;
ptr++;
}
*ptr = '\0';
return (ptr - (i + j + 1));
}
