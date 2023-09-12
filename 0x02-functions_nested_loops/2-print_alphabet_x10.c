#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
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

return (0);
}
