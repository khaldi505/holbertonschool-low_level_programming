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
{
x++;
}
x = x - 1;
while (x >= 0)
{
_putchar(*(s + x));
x--;
}
_putchar('\n');
}
