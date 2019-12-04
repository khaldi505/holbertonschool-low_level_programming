#include "holberton.h"
/**
*_pow_recursion - power func
*@x: int type wallah
*@y: this one too
*Return: the value of x raised to the power of y
*/
int _pow_recursion(int x, int y)
{
if (y == 0)
return (1);
else if (y < 0)
return (-1);
return (x * _pow_recursion(x, y - 1));

}
