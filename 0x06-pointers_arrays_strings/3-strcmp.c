/**
 * _strcmp - Compare two strings character by character.
 *
 * @s1: The first null-terminated string to compare.
 * @s2: The second null-terminated string to compare.
 *
 * Description:
 * This function compares the two null-terminated strings @s1 and @s2.
 *
 * Return:
 * - An integer less than 0 if @s1 is found to be less than @s2.
 * - 0 if @s1 is equal to @s2.
 * - An integer greater than 0 if @s1 is found to be greater than @s2.
 */




int _strcmp(char *s1, char *s2)
{
int i = 0;

while (*s1 != '\0' || *s2 != '\0')
{
if (*s1 == *s2)
{
i++;
}

else
{
i--;
}
s1++;
s2++;
}
return (i);

}
