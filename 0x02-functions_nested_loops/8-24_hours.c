#include "holberton.h"
#include <stdio.h>
/**
*jack_bauer -prints every minute of the day of Jack Bauer
*Return: void
*/
void jack_bauer(void)
{
int min, hours;
min = 00;
hours = 00;
while (min <= 60)
{
if (min == 60)
{
hours = hours + 1;
min = 0;
}
if ((hours < 10) && (min < 10))
printf("00 : 0%d\n", min);
else
printf("%d : %d\n", hours, min);
min++;
if ((hours == 23) && (min == 60))
{
break;
}
}
}
