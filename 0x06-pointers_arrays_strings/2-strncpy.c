/**
 * _strncpy - Copy up to n characters from the source to the destination.
 *
 * @dest: A pointer to the destination character array.
 * @src: A pointer to the source character array.
 * @n: The maximum number of characters to copy from src to dest.
 *
 * Description:
 * This function copies up to n characters from the source string src to the
 * destination string dest. If a null terminator in src is encountered before
 * copying n characters, the function pads dest with null characters ('\0') to
 * reach the length of n.
 *
 * Return:
 * A pointer to the destination string (dest).
 */

char *_strncpy(char *dest, char *src, int n)
{
char *original_dest = dest;

while (n > 0 && *src != '\0')
{
*dest = *src;
n--;
dest++;
src++;
}

if (n == 0)
return (original_dest);
*dest = '\0';
return (original_dest);
}
