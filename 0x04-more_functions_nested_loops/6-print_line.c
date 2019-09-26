#include "holberton.h"
/**
* print_line - function that draws a straight line
*@n: integer to count
* Return : void
*/
void print_line(int n)
{
int line;
for (line = 0; line < n; line++)
{
_putchar ('_');
}
_putchar ('\n');
}
