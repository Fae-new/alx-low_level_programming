
/**
 * reverse_array - Reverse the order of elements in an integer array.
 *
 * @a: A pointer to the integer array to be reversed.
 * @n: The number of elements in the array.
 *
 * Description:
 * This function reverses the order of elements in the integer array @a.
 *
 * Return: None (void).
 */
void reverse_array(int *a, int n);


void reverse_array(int *a, int n)
{

int *copy = a;

int i = n;

while (i > 0)
{
a++;
i--;
}

while (n > 0)
{
*copy = *a;
n--;
a--;
copy++;
}
}
