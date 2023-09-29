/**
 * factorial - Calculates the factorial of a non-negative integer.
 * @n: The integer for which the factorial is calculated.
 *
 * Return: The factorial of 'n' if 'n' is non-negative, or -1 on error.
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (n * factorial(n - 1));
}
}

