#include <stddef.h>

/**
 * array_iterator -loops through an array,use a function on each element.
 * @array: Pointer to the integer array.
 * @size: Size of the array.
 * @action: Pointer to the function to be applied to each element.
 *
 * Description: loops @array of size @size uses @action to each element.
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{

unsigned int i;

for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
