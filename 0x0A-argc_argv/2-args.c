/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array containing command-line arguments
 *
 * Description: Prints each command-line argument on a new line,
 * including the program name.
 *
 * Return: Always 0 (Success)
 */


#include <stdio.h>

int main(int argc, char **argv)
{

int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
