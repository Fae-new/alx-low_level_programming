/**
 * _strcat - Concatenates two strings.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: A pointer to the resulting concatenated string.
 */
char *_strcat(char *dest, char *src)
{


char *string = dest;

while (*dest != '\0')
{
dest++;
}

while (*src != '\0')
{
*dest = *src;

dest++;
src++;
}
*dest = '\0';

return (string);

}

