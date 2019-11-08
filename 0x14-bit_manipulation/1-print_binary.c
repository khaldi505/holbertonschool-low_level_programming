#include "holberton.h"
#include <stdio.h>
/**
*print_binary - prints the binary representation of a number.
*@n: the input from the main func
*Return: void
*/
void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);
printf("%ld", n & 1);
}
