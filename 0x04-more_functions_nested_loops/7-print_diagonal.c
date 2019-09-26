#include "holberton.h"
/**
 * print_diagonal - prints diagonal
 *@n: size
 * Return: nothing
 */

void print_diagonal(int n)
{
int line, line_2;
for (line = 0; line < n; line++)
{
for (line_2 = 0; line_2 <= line; line_2++)
{
if (line_2 != line)
{
_putchar(' ');
}
else
{
_putchar('\\');
}
}
_putchar('\n');
}
if (n <= 0)
_putchar('\n');
}
