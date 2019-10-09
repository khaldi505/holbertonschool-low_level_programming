#include "holberton.h"
/**
 *_puts_recursion - prints a string, followed by a new line.
 *@s: char type 
 *
 */
void _puts_recursion(char *s)
{
int i = 0;
for (; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
 _putchar('\n');
}
