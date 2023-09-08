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

while (lowercaseletter <= 'z')
{
if (lowercaseletter == 'q' || lowercaseletter == 'e')
{
lowercaseletter++;
continue;
}
putchar(lowercaseletter);
lowercaseletter++;
}

putchar('\n');
return (0);
}
