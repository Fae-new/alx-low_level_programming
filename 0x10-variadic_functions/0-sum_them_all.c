#include <stdio.h>
#include <stdarg.h>

/**
 *sum_them_all-the sum of a number of arguments.
 * @n: Total number of arguments.
 * @...: Variable number of arguments to be summed.
 *
 * Description: This function takes a variable number
 * of arguments and returns their sum. It uses the
 * ellipsis (...) to handle the variable arguments.
 * The parameter @n specifies the total number of arguments.
 *
 * Return: Sum of all arguments.
 */


int sum_them_all(const unsigned int n, ...)
{

va_list ap;

unsigned int i;

int sum = 0;

if (n == 0)
return (0);

va_start(ap, n);

for (i = 0; i < n; i++)
{
sum += va_arg(ap, int);
}

va_end(ap);

return (sum);
}
