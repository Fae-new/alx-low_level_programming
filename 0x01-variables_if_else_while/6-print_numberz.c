#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int base10number = 0;

while (base10number < 10)
{
putchar('0' + base10number);
base10number++;
}

putchar('\n');
return (0);
}
