#include "main.h"

/**
 * print_line - Prints a horizontal line of a specified length.
 *
 * This function prints a horizontal line consisting of a specified number
 * of characters, which can be used to create horizontal dividers or visual
 * separators in the output.
 *
 * @n: The length of the horizontal line to print.
 *
 * This function does not return a value (void).
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}


int i;

for (i = 0; i < n; i++)
{
_putchar('_');
}	
_putchar('\n');



}

