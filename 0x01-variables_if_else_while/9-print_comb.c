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

for (int i = 0; i < 10; i++)
{
for (int j = 0; j < 10; j++)
{
putchar('0' + i);
putchar('0' + j);
putchar(',');
}
}

putchar('\n');
return (0);
}
