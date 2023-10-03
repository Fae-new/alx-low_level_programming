#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 *main - Adds positive numbers from command line, prints result.
 * @argc: Number of command-line arguments
 * @argv: Array containing command-line arguments
 *
 * Return: 0 if successful, 1 if error
 */


int main(int argc, char **argv)
{

int i, j;

int sum = 0;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error: Argument '%s' is not a valid integer.\n", argv[i]);
return (1);
}
}
}

for (i = 1; i < argc; i++)
{
sum += atoi(argv[i]);
}

printf("%d\n", sum);

return (0);
}

