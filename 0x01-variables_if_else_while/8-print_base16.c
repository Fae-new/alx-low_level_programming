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
int numbers = 0;

char letter = 'a';

while (numbers <= 9)
{
putchar('0' + numbers);
numbers++;
}

while (letter <= 'f')
{
putchar(letter);
letter++;
}

putchar('\n');
return (0);
}
