#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints its name, and adapts to new names without recompilation.
 * The path before the program name is retained.
 *
 * Return: Always 0 (Success)
 */


int main(int argc, char **argv)
{

    printf("%s\n", argv[0]);

    return (0);
}
