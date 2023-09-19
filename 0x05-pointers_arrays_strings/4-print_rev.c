#include <stdio.h>

/**
 * print_rev - Print a string in reverse.
 * @s: A pointer to a null-terminated string.
 *
 * Description:
 * The `print_rev` function prints the characters of the null-terminated string
 * pointed to by `s` in reverse order to the standard output (typically the
 * console).
 */


void print_rev(char *s) {
int length = 0;

while (s[length] != '\0') {
        length++;
}

for (int i = length - 1; i >= 0; i--) {
putchar(s[i]);
}

putchar('\n');
}


