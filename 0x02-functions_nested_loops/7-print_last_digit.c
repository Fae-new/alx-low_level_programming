/**
 * print_last_digit - Print the last digit of an integer.
 *
 * @n: The integer whose last digit is to be printed.
 *
 * Return: The last digit of 'n'.
 */


int print_last_digit(int n)
{

int i = n % 10;

if (i > 0)
{
_putchar(i + 48);
return (i);
}

else
{
_putchar(-i + 48);
return (-i);
}

}
