#include "holberton.h"

/**
*rot13 - encodes a string using rot13.
*@s: string
*Return: a string
*/

char *rot13(char *s)
{
int counter = 0;
int c;
char *abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
while (s[counter])
{
for (c = 0; abc[c] != '\0'; c++)
{
if (s[counter] == abc[c])
{
s[counter] = rot[c];
break;
}
}
c = 0;
counter++;
}
return (s);
}
