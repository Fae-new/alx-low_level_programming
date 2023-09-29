#include "main.h"

/**
 * _puts_recursion - Prints a string recursively.
 *
 * @s: Pointer to the string to be printed.
 *
 * Description:
 *   This function prints the characters of a string recursively
 * Note:
 *   - Ensure "main.h" is included before using this function.
 */

void _puts_recursion(char *s)
{
putchar(*s);
s++;
if (*s != '\0')
_puts_recursion(s);

}
