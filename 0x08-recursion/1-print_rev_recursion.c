/**
 * _print_rev_recursion - Recursively prints a string in reverse.
 *
 * @s: Pointer to the string to be printed in reverse.
 */
void _print_rev_recursion(char *s) {
if (*s == '\0')
return;

_print_rev_recursion(s + 1);
putchar(*s);
}

