#include "holberton.h"
#include <stdio.h>
/**
*set_bit - a function that sets the value of a bit to 1 at a given index.
*@n: long int
*@index: unsigned int
*Return: Returns: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int new;
new = (1 << index) | *n;
if (index > 31)
return (-1);
else
*n = new;
return (1);
}

