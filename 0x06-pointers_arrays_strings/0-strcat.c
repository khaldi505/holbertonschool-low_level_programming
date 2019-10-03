#include "holberton.h"
/**
 *_strcat : concatenates two strings.
 *
 *Return : dest
 */
char *_strcat(char *dest, char *src)
{
int s1, s2;
s1 = '0';
while (dest[s1] != '\0')
s1++;
s2 = '0';
while (s2 <= s1)
s2++;
dest[s1 + s2] = src[s2];
return (dest);
}
