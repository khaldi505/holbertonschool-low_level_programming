#include "holberton.h"
/**
* puts_half - it gives the last half of a string
*@str: pointer to a string
* Return: void
*/
void puts_half(char *str)
{
int o, m = 0;
while (*(str + m) != '\0')
{
m++;
}
if (m % 2 == 0)
{
o = m / 2;
}
else
{
o = (m - 1) / 2;
o++;
}
for (; o < m; o++)
{
_putchar(*(str + o));
}
_putchar('\n');
}
