/**
 * swap_int - Swaps the values of two integers.
 * @a: A pointer to the first integer.
 * @b: A pointer to the second integer.
 *
 * Description:
 * The swap_int function takes two pointers to integers as its arguments and
 * swaps the values of the integers they point to.
 *
 * Return: None (void)
 */
void swap_int(int *a, int *b)
{

int temp;

temp = *a;

*a = *b;

*b = temp;

}
