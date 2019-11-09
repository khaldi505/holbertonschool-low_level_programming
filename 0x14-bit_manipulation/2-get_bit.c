#include "holberton.h"
/**
*get_bit - a function that returns the value of a bit at a given index.
*@n: an unsigned long int number
*@index:the bit position from user.
*Return: returns the value of a bit at a given index.
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (n == 0)
return (-1);
n = n >> index & 1;
return (n);
}
