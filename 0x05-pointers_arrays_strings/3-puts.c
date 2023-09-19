/**
 * _puts - Prints a string to the standard output.
 * @str: A pointer to a null-terminated string.
 *
 * Description:
 * The `_puts` function prints  string pointed to by `str`It continues
 * character in the string until the null terminator ('\0') is encounter
 * Return: None (void).
 */
void _puts(char *str)
{

while (*str != '\0')
{
_putchar(*str);
}
_putchar('\n');
}
