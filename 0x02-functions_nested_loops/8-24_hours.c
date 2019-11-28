#include "holberton.h"
#include <stdio.h>
/**
*jack_bauer -prints every minute of the day of Jack Bauer
*Return: void
*/
void jack_bauer(void)
{
int min, hours;
min = 0;
hours = 0;

while (min <= 60)
{
if (min == 60)
{
hours = hours + 1;
min = 0;
}
_putchar((hours / 10) + '0');
_putchar((hours % 10) + '0');
_putchar(':');
_putchar((min / 10) + '0');
_putchar((min % 10) + '0');
_putchar('\n');
min++;
if ((hours == 23) && (min == 60))
{
break;
}
}
}
