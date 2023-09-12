#include <stdio.h>

/**
 * jack_bauer - Print every minute of a 24-hour day.
 *
 *
 * The function has no return value (void).
 */


void jack_bauer(void)
{
int i;

for (i = 0; i <= 23; i++)
{
int j;

for (j = 0; j < 60; j++)
{

putchar('0' + (i / 10));

putchar('0' + (i % 10));

putchar(':');

putchar('0' + (j / 10));

putchar('0' + (j % 10));

putchar('\n');
}
}
}
