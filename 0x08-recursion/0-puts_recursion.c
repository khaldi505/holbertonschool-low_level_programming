#include "holberton.h"
/**
 *_puts_recursion - prints a string, followed by a new line.
 *@s: char type
 *
 */
void _puts_recursion(char *s)
{
int i;
i = 0;
_putchar(s[i]);
i++;
if (s[i] > '\0')
{
_puts_recursion(s + i);
}
if (s[i] == '\0')
{
_putchar('\n');
}
}
