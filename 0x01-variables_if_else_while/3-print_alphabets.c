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
char lowercaseletter = 'a';

char uppercaseletter = 'A';

while (lowercaseletter <= 'z')
{
putchar(lowercaseletter);
lowercaseletter++;
}

while (uppercaseletter <= 'Z')
{
putchar(uppercaseletter);
uppercaseletter++;
}
putchar('\n');
return (0);
}
