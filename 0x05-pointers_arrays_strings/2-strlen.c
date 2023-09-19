/**
 * _strlen - Computes the length of a string.
 * @s: A pointer to a null-terminated string.
 *
 * Description:
 * The _strlen function calculates and returns the length of the input
 * null-terminated string by counting the number of characters in it.
 *
 * Return: The length of the string (an integer).
 */
int _strlen(char *s) {

int length = 0;

while (*s != '\0')
{
length++;
s++;
}

return length;
}

