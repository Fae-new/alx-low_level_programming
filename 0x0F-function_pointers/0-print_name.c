/**
 * print_name - Prints a string using a custom printing function.
 * @name: Pointer to the null-terminated string to be printed.
 * @f: Pointer to the custom printing function taking a char pointer parameter.
 *
 * Description: takes a string @name and uses a function  pointer @f to print.
 */


void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}
