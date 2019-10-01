#include "holberton.h"
/**
 *print_rev - prints a string, in reverse, followed by a new line
 *Return : nothing
 */
void print_rev(char *s)
{
int x;
x = 0;
while (*(s + x) != '\0')
x++;
x--;
for (; x >= 0; x--)
_putchar(*(s + x));
_putchar('\n');
}
