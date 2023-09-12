#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Prints the English alphabet from 'a' to 'z'.
 *
 * This function prints the English alphabet from 'a' to 'z', one letter per
 * line.
 */

void print_alphabet(void)
{
int i;

for (i = 97; i < 123; i++)
{
putchar(i);
}

putchar('\n');

}
