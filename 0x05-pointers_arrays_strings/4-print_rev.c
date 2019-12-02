#include "holberton.h"
/**
*print_rev -  prints a string, in reverse, followed by a new line.
*@s: a pointer to the first character of the string
*Return: void 
*/
void print_rev(char *s)
{
int len = 0;
int lenull;
lenull = 0;
while (s[lenull] != '\0')
lenull++;
while (s[len] != '\0')
{
_putchar(s[lenull]);
len++;
lenull--;
}
_putchar(*s);
_putchar('\n');
}
