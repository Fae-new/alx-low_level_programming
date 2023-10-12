#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>


/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;

va_list ap;

va_start(ap, n);

for (i = 1; i <= n; i++)
{

if (i == n || separator == NULL)
printf("%s", va_arg(ap, char *));

else
printf("%s%s", va_arg(ap, char *), separator);
}
va_end(ap);
printf("\n");
}

