#include "holberton.h"
/**
 *cap_string - capitalizes the first letter in a world
 *@s: string
 *Return: a string
 */
char *cap_string(char *s)
{
int counter = 0;

if ((s[counter] >= 'a' || (s[counter] <= 'z' && !(s[counter] < 'a'))))
s[counter] -= 32;

while (s[counter] != '\0')
{
if ((s[counter - 1]) && (s[counter - 1] == ' ' ||
s[counter - 1] == '\n' || s[counter - 1] == '\t' || s[counter - 1] == '.'))
if (s[counter] >= 'a' || (s[counter] <= 'z' && !(s[counter] < 'a')))
{
s[counter] -= 32;
}
counter++;
}

return (s);
}
