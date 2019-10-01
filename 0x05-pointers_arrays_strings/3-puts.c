#include "holberton.h"
/**
* _puts - print a string
*@str: string to print
*Return: nothing
*/
void _puts(char *str)
{
int n;
n = 0;
while (*(str + n) != '\0')
{
_putchar(*(str + n));
n += 1;
}
_putchar('\n');
}
