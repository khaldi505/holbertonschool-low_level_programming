#include "holberton.h"
/**
 * print_sign - function that prints the sign of a number.
 * @n : number to check
 * Return: int and prints a sign of a number
 */
int print_sign(int n)
{
if (n > '0')
{
_putchar ('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
