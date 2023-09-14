#include "main.h"

/**
 * more_numbers - Prints a sequence of numbers.
 *
 * This function prints a sequence of numbers, which may include a larger
 * range of integers or specific patterns of numbers. The behavior of the
 * numbers printed by this function depends on its implementation.
 *
 * This function does not take any parameters.
 *
 * Return: This function does not return a value (void).
 */

void more_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
{
int j;

for (j = 0; j <= 14; j++)
{
if (j >= 10)
{
_putchar((j / 10) + '0');
}

_putchar(((j % 10) + '0'));

}

_putchar('\n');

}


}
