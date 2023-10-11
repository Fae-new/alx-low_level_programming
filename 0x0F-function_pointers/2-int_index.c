/**
 * int_index - Searches for an integer in an array using
 * a comparison function.
 * @array: Pointer to the integer array.
 * @size: Size of the array.
 * @cmp: Pointer to the comparison function.
 *
 * Description: This function searches for an integer in the
 * given integer @array
 * of size @size using the provided comparison function @cmp.
 *  It returns the index
 * of the first element for which the comparison function
 *  returns non-zero.
 * If no element matches, or if array is NULL, or if size
 * is less than or equal to 0, -1 is returned.
 *
 * Return: Index of the first matching element, or -1 if no match
 * is found or if array is NULL or size is non-positive.
 */


int int_index(int *array, int size, int (*cmp)(int))
{

int i;

if (size > 0)
{
for (i = 0; i < size; i++)
{
if ((*cmp)(array[i]) != 0)
return (i);
}
}
return (-1);
}
