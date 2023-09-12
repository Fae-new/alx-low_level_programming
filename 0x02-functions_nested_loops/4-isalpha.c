/**
 * _isalpha - Check if a character is an alphabetic character.
 *
 * @c: The character to be checked.
 *
 * Return: Returns a non-zero value (true) if 'c' is an alphabetic character,
 *         and returns 0 (false) otherwise.
 */
int _isalpha(int c)
{

if (c >= 97 && c <= 122)
return (1);

else if (c >= 65 && c <= 90)
return (1);

else
return (0);

}
