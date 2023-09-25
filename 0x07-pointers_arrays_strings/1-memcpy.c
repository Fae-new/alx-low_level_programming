/**
 * _memcpy - Copy 'n' bytes from 'src' to 'dest'.
 *
 * @dest: Destination memory area.
 * @src: Source memory area.
 * @n: Number of bytes to copy.
 *
 * Returns: Pointer to 'dest'.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

char *start = dest;

while (n > 0)
{

*dest = *src;
src++;
dest++;
n--;
}
return (start);
}
