/**
 * _strspn - Calculate the length of the initial segment of a string
 *           consisting of characters from a specified set.
 *
 * @s: The input string to analyze.
 * @accept: The set of characters to match.
 *
 * Return: The length of the initial segment of 's' containing only
 *         characters from 'accept'.
 */

unsigned int _strspn(char *s, char *accept)
{

unsigned int n = 0;

char *start = accept;
while (*s != '\0')
{

accept = start;

while (*accept != '\0')
{
if (*s == *accept)
n++;
accept++;
}

s++;
}

return (n);
}
