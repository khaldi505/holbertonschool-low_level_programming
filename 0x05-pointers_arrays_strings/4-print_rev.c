#include "holberton.h"

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
