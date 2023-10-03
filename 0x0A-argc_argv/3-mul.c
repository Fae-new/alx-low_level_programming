/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array containing command-line arguments
 *
 * Description: Multiplies two command-line arguments and prints the result.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
if (argc != 3)
{
printf("Error");
return (1);
}

printf("%d\n", argv[1] * argv[2]);

return (0);
}
