#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - Prints a variable number of integers,
 * separated by a specified string.
 * @separator: The string to be printed between numbers.
 * @n: The total number of integers to be printed.
 * @...: Variable number of integers to be printed.
 *
 * Description: This function takes a variable number of integers
 * and prints them to the standard output, separated by
 * the specified string @separator. The parameter @n specifies
 * the total number of integers to be printed. The ellipsis
 * (...) indicates a variable number of arguments.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

unsigned int i;

va_list ap;

va_start(ap, n);

for (i = 1; i <= n; i++)
{
if (i == n || separator == NULL)
printf("%d", va_arg(ap, int));

else
printf("%d %s", va_arg(ap, int), separator);
}
va_end(ap);
printf("\n");
}
