#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Prints the English alphabet ten times.
 *
 * This function prints the letters from 'a' to 'z' in the English alphabet
 * ten times, separated by spaces.
 */

void print_alphabet_x10(void)
{
int i;

for (i = 1; i <= 10; i++)
{
int j;
for (j = 97; j < 123; j++)
{
putchar(j);
}
putchar('\n');
}

}
