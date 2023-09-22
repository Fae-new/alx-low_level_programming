/**
 * leet - Replace some characters with numbers in a given string.
 *
 * @string: A pointer to the null-terminated string to be modified.
 *
 * Description:
 * The modification is done in place, and the original string is changed.
 *
 * Return:
 * A pointer to the modified string.
 */

char *leet(char *string)
{

char *copy = string;

while (*string != '\0')
{
if (*string == 'a' || *string == 'A')
*string = '4';
else if (*string == 'e' || *string == 'E')
{
*string = '3';
}

else if (*string == 'o' || *string == 'O')
{
*string = '0';
}
else if (*string == 't' || *string == 'T')
{
*string = '7';
}
else if (*string == 'l' || *string == 'L')
{
*string = '1';
}

string++;
}
return (copy);
}
