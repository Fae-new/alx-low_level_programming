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
int i;

int j;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
putchar('0' + i);
putchar('0' + j);
putchar(',');
}
}

putchar('\n');
return (0);
}
