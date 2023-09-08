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
char lowercaseletter = 'z';

while (lowercaseletter >= 'a')
{

putchar(lowercaseletter);
lowercaseletter--;
}

putchar('\n');
return (0);
}
